// Created By Momin_Rifat
#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(27);
    for(int i = 1; i <= 26; i++) 
    {
        a[i] = 96 + i;
    }

    int i = n - 1;
    string ans = "";
    while (i >= 0) 
    {
        if(s[i] == '0') 
        {
            int num = stoi(s.substr(i - 2, 2));
            ans += char(a[num]);
            i -= 3;
        } 
        else 
        {
            ans += char(a[s[i] - '0']);
            i--;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main() 
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) 
    {
        solve();
    }
    return 0;
}
