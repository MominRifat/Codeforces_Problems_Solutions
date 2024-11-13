// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int a, b;
        cin >> a >> b;
    
        int TotalSum = a * 1 + b * 2;
        
        if (TotalSum % 2 == 0 && (b % 2 == 0 || a >= 2)) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}