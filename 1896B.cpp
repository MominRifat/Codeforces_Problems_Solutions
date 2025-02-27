#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int indexA = -1;
    int indexB = -1;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
        {
            indexA = i;
            break;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'B')
        {
            indexB = i;
        }
    }
    if(indexA == -1 || indexB == -1)
    {
        cout << 0 << endl;
    }
    else if(indexB < indexA)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << indexB - indexA << endl;
    }
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