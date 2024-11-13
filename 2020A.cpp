// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        int ans = 0;
        if(k == 1) cout << n << endl;
	    else
        {
	        while(n)
            {
		        ans += n%k;
		        n /= k;
	        }
            cout << ans << endl;
        }
    }
    return 0;
}