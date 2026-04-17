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

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(isVowel(s[i]))
        {
            vector<char> cons;
            int j = i - 1;
            while(j >= 0 && isVowel(s[j])) j--;
            while(j >= 0 && !isVowel(s[j]))
            {
                cons.push_back(s[j]);
                j--;
            }
            j = i + 1;
            while(j < n && isVowel(s[j])) j++;
            while(j < n && !isVowel(s[j]))
            {
                cons.push_back(s[j]);
                j++;
            }
            char best = cons[0];
            for(char c : cons)
            {
                int d1 = abs(c - s[i]);
                int d2 = abs(best - s[i]);
                if(d1 < d2) best = c;
                else if(d1 == d2 && c < best) best = c;
            }
            cout << i << " " << best << endl;
        }
    }
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