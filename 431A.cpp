// Created By Momin_Rifat
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    string num;
    cin >> num;
    int sum = 0;
    for(int i = 0; i < num.length(); i++)
    {
        if(num[i] == '1')
        {
            sum = sum + a;
        }
        else if(num[i] == '2')
        {
            sum = sum + b;
        }
        else if(num[i] == '3')
        {
            sum = sum + c;
        }
        else if(num[i] == '4')
        {
            sum = sum + d;
        }
    }

    cout << sum << endl;
    return 0;
}