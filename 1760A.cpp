// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int middleNumber = max(min(a, b), min(max(a, b), c));
        cout << middleNumber << endl;
    }
    return 0;
}