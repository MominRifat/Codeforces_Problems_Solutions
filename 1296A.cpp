//Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0, odd = 0, even = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if(arr[i] % 2 != 0)
            {
                odd++;
            }
            else 
            {
                even++;
            }
        }
        if(sum % 2 != 0) cout << "YES" << endl;
        else
        {
            if(odd && even) cout << "YES" << endl;
            else cout << "NO" << endl;

        }
    }
    return 0;
}