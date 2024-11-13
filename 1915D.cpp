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
        cin >> n;
        string word;
        cin >> word;
        for(int i = 0; i < n; i++)
        {
            if(word[i] == 'b' || word[i] == 'c' || word[i] == 'd')
            {
                cout << word[i];
            }
            else
            {
                cout << word[i];
                if(word[i + 1] == 'b' || word[i + 1] == 'c' || word[i + 1] == 'd')
                {
                    if(word[i + 2] != 'a' && word[i + 2] != 'e' )
                    {
                        cout << word[i + 1];
                        i += 1;
                    }
                }
                if(i != n - 1)
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    return 0;
}