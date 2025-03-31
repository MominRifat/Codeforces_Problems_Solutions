// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
	string s;
	cin >> s;
    long long int x = 0;
    long long int y = 0;
	for(int i = 0; i < n; i++)
    {
	    if(s[i]=='-') 
        {
            x++;
        }
	    else 
        {   
            y++;
        }	
	}
	cout << ((x*x)/4)*y << endl;
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