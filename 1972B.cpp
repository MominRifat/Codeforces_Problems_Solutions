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
        int n;
        cin >> n;
        string coin;
        cin >> coin;
        int i = 0;
        int count_U = 0;
        for (char c : coin) 
        {
            if (c == 'U')   count_U++;
        }

        if(count_U % 2 == 0) 
        {
            cout << "NO" << endl;
        }   
        else
        {
            cout << "YES" << endl;
        }    
    }
    return 0;
}