// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin>>n;
        char a[n][4];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<4;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=3;j>=0;j--)
            {
                if(a[i][j]=='#')
                    cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}