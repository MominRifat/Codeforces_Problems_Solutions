// Created By Momin_Rifat
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string num;
    cin >> num;
    if (num[0] == '-') 
    {
        int num_len = num.length();
        
        if(num[num_len - 1] > num[num_len - 2]) 
        {
            num.erase(num_len - 1,1);
        }
        else 
        {
            num.erase(num_len - 2, 1);
        }
    }
    if(num == "-0" ) 
    {
        num = "0";
    }
    cout << num;

    return 0;
}