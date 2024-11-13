// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        int min1 = 0;
        for(int i = 1; i <= n; i++)
        {
            min1 = min1 + a;
        }
        int min2 =  (n / 2) * b + (n % 2) * a;
        
        int ans = min(min1,min2);

        cout << ans << endl;
    }
    return  0;
}