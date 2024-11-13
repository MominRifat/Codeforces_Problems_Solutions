// Created By Momin_Rifat
#include<iostream>
#include<cmath>
#define go cout
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, f, a, b;
        cin >> n >> f >> a >> b;
        long long int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int mn;
        long long int previous = 0;
        for(int i = 0; i < n; i++)
        {
            mn = min(b,abs(previous - arr[i])*a);
            f -= mn;
            previous = arr[i];
        }
        if(f > 0)
        {
            go << "YES" << endl;
        }
        else
        {
            go << "NO" << endl;
        }
    }
    return 0;
}