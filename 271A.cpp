// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int y;
    cin >> y;
    while(1) 
    {
        y += 1;
        string year = to_string(y);
        if(year[0] != year[1] && year[0] != year[2] && year[0] != year[3] &&
            year[1] != year[2] && year[1] != year[3] && year[2] != year[3]) 
        {
            cout << year << endl;
            break;
        }
    }
    return 0;
}