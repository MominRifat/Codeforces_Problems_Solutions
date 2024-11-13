// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    int arr[N];
    for(int i = 1; i <= N; i++) 
    {
        cin >> arr[i];
    }
    
    if(N == 1) 
    {
        cout << "-1\n";
    } 
    else if(N == 2) 
    {
        if(arr[1] == arr[2]) 
        {
            cout << "-1\n";
        } 
        else 
        {
            cout << "1\n1\n";
        }
    } 
    else 
    {
        if(arr[1] != accumulate(arr + 2, arr + N + 1, 0)) 
        {
            cout << "1\n1\n";
        } 
        else 
        {
            cout << "1\n2\n";
        }
    }
    return 0;
}
