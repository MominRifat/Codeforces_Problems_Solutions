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

void solve(int i)
{
    string s;
    cin >> s;
    char lds = s[s.size() - 1];
    if(s.size() == 1 && s[0] == '0')
    {
        cout << 0 << endl;
        return;
    }
    if((s[s.size() - 1] != '*') && ((s[s.size() - 1] - '0') % 2 == 1))
    {
        cout << -1 << endl;
        return;
    }
    ll sum = 0;
    ll star = 0;
    ll lastst = -1;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != '*')
        {
            sum += (s[i] - '0');
        }
        else 
        {
            lastst = i;
            star++;
        }
    }
    if(sum % 3 != 0 && star == 0)
    {
        cout << -1 << endl;
        return;
    }
    //cout << sum << endl;
    if(star == 1 && s.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll need = 0;
    if(sum % 3 != 0)
    {
        need = 3 - (sum % 3);
    }
    if(s[0] == '*' && need == 0) need = 3;
    if(star == 1 && s[0] == '*')
    {
        if(need == 0)
        {
            s[0] = '0';
        }
        if(need == 1)
        {
            s[0] = '1';
        }
        if(need == 2)
        {
            s[0] = '2';
        }
        if(need == 3)
        {
            s[0] = '3';
        }
        cout << s << endl;
        return;
    }
    ll flag = 1;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(s[i] == '*' && flag == 1)
        {
            if(need == 0)
            {
                s[i] = '0';
                need = 0;
            }
            if(need == 1)
            {
                s[i] = '1';
                need = 0;
            }
            if(need == 2)
            {
                s[i] = '2';
                need = 0;
            }
            if(need == 3)
            {
                s[i] = '3';
                need = 0;
            }
            flag = 0;
        }
        else if(s[i] == '*' && flag == 0) s[i] = '0';
    }
    // if(s[s.size() - 1] == '1')
    // {
    //     s[lastst] = '4';
    // }
    //cout << "s" << s << endl;
    if(s[0] == '0')
    {
        //cout << "hi";
        s[0] = '1';
        //cout << "s" << s << endl;
        ll last = s[lastst] - '0';
        last--;
        //cout << "last" << last << endl;
        if(s[s.size() - 1] == '1')
        {
            s[lastst] = '4';
        }
        if(last == 0) s[lastst] = '0';
        if(last == 1)
        {
            s[lastst] = '1';
        }
        if(last == 1 && s[s.size() - 1] == '1') 
        {
            s[lastst] = '4';
        }
        if(last == 2) s[lastst] = '2';
    }
    if(lds == '*' && s[s.size() - 1] == '1')
    {
        s[lastst] = '4';
    }
    cout << s << endl;
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
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
       solve(i);
    }
    return 0;
}