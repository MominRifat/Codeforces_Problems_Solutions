// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b;
	cin >> n >> a >> b;
	for(int i = 0; i < n; i++) 
    {
		cout << char('a' + i % b);
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