// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int a, b; 
    cin >> a >> b;
 
    int maxV = max(a, b);
 
    if(maxV == 1)
    {
        cout << "1/1" << endl;
    }
    else if(maxV == 2)
    {
        cout << "5/6" << endl;
    }
    else if(maxV == 3)
    {
        cout << "2/3" << endl;
    }
    else if(maxV == 4)
    {
        cout << "1/2" << endl;
    }
    else if(maxV == 5)
    {
        cout << "1/3" << endl;
    }
    else 
    {
        cout << "1/6" << endl;
    }

    return 0;
}