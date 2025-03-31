// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
		for(i = 0; i < n; i++)
		{
            int x;
			cin >> x;
			if(x <= 2 * max(i, n - i - 1)) flag = 1;
		}
		if(flag) cout << "NO" << endl;
		else cout << "YES" << endl;
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