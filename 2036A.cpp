#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        int s;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int flag = 1;
        for(int i = 0; i < n-1; i++)
        {
            s = abs(arr[i] - arr[i + 1]);
            if(s == 5 || s == 7)
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}