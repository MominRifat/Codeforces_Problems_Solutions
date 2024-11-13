// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int r,m=0,n=0;
    cin >> r;

    for(int i = 0; i < r; i++)
    {
        int a,b;
        cin >> a >> b;
        if(a > b)
        {
            m++;
        }
        else if(a < b)
        {
            n++;
        }
    }

    if(m > n)
    {
        cout << "Mishka" << endl;
    }
    else if(m < n)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}