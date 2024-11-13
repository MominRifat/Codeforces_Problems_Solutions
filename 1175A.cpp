// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    cin >> tc;
    while(tc--) 
    {
        long long int n, k;
        cin >> n >> k;
        long long int count = 0;
        while(n > 0)
        {
            if(n % k == 0)
            {
                n /= k;
                count++;
            }
            else
            {
                long long rem = n % k;
    	        count += rem;
    	        n -= rem;
            }
        }
        cout << count << endl;
    }
    return 0;
}
