// Created By Momin_Rifat
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int tc;
    cin >> tc;
    while (tc--) 
    {
        long long l, r;
        cin >> l >> r;
        
        long long max_diff = r - l;
        long long k = (-1 + sqrt(1 + 8 * max_diff)) / 2;
        
        cout << k + 1 << endl;
    }
    
    return 0;
}