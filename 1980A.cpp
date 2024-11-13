// Created By Momin_Rifat
#include<iostream>
#include<string.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        int count[7] = {0};

        for(int i = 0; i < n; i++) 
        {
            if (a[i] >= 'A' && a[i] <= 'G') 
            {
                count[a[i] - 'A']++;
            }
        }

        int need = 0;
 
        for(int i = 0; i < 7; i++) 
        {
            if(count[i] < m) 
            {
                need += (m - count[i]);
            }
        }

        cout << need << endl;
    }
    return 0;
}