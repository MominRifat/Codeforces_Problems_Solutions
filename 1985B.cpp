// Created By Momin_Rifat
#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        int m = 0;
        int o = 0;

        for(int x = 2; x <= n; ++x)
        {
            int sum = 0;
            int k = n / x;
            sum = (k * (k + 1)) / 2 * x;

            if(sum > m) 
            {
                m = sum;
                o = x;
            }
        }

        cout << o << endl;
    }

    return 0;
}