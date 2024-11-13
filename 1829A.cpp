// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string word;
        cin >> word;
        int count = 0;
        string wordPrime = "codeforces";
        for(int i = 0; i < word.size(); i++)
        {
            if(word[i] == wordPrime[i]) count++;
        }
        cout << 10 - count << endl;
    }
    return 0;
}