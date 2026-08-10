// Created By Momin_Rifat
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
template <typename T> using oder_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    string s;
    cin >> s;

    // Count frequency of each character
    map<char,int>mp;
    for(auto x : s) mp[x]++;

    // Count how many characters have odd frequency
    // For a palindrome, at most one character can have odd frequency
    int cnt = 0;
    char c;  // Store the character with odd frequency (if any)
    bool flag = false;  // flag = true means there is an odd frequency character
    for (auto x : mp)
    {
        if(x.second % 2 == 1)
        {
            cnt++;
            c = x.first;
            flag = true;
        }
        // If more than one character has odd frequency, palindrome is impossible
        if(cnt == 2)
        {
            cout << "NO SOLUTION" << endl;
            return;
        }
    }
    // Print first half of palindrome (left side in sorted order)
    for(auto x : mp)
    {
        if(flag) if(x.first == c) continue;  // Skip the middle odd character
        for(int i = 1; i <= x.second / 2; i++)
        {
            cout << x.first;
        }
    }
    // Print the middle character (if exists)
    if(flag) for(int i = 1; i <= mp[c]; i++) cout << c;
    // Print second half of palindrome (right side in reverse sorted order)
    for(auto x = mp.rbegin(); x != mp.rend(); x++)
    {
        if(flag) if (x->first == c) continue;  // Skip the middle odd character
        for(int i = 1; i <= x->second / 2; i++)
        {
            cout << x->first;
        }
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int tc = 1;
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}