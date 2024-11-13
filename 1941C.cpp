// Created By Momin_Rifat
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int size;
        cin >> size;
        string word;
        cin >> word;
        int ans = 0;
        for(int i = 0; i < size; i++)
        {
            if((word[i] == 'm' && word[i+1] == 'a' && word[i+2] == 'p') || 
               (word[i] == 'p' && word[i+1] == 'i' && word[i+2] == 'e'))
               {    
                    ans++;
                    i += 2;
               }
        }
        cout << ans << endl;
    }
    return 0;
}