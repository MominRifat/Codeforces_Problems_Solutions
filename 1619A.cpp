// Created By Momin_Rifat
#include<iostream>
#include<string>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        string s;
        cin >> s;
        int len = s.length();
        if (len % 2 == 0) 
        {
            string first_half = s.substr(0, len / 2);
            string second_half = s.substr(len / 2, len / 2);
            if (first_half == second_half) 
            {
                cout << "YES" << endl;
            } 
            else 
            {
                cout << "NO" << endl;
            }
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}