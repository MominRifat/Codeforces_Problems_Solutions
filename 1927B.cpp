// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    char result[n];
    int freq[26] = {0};
    for(int i = 0; i < n; i++) 
    {
        for(char c = 'a'; c <= 'z'; c++) 
        {
            if(freq[c - 'a'] == arr[i]) 
            { 
                result[i] = c;
                freq[c - 'a']++;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++) 
    {
        cout << result[i];
    }
    cout << endl;
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