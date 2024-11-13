// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        string ans;
        cin >> ans;

        vector<int> count(4, 0);
        for(char c : ans) 
        {
            if(c == 'A') count[0]++;
            if(c == 'B') count[1]++;
            if(c == 'C') count[2]++;
            if(c == 'D') count[3]++;
        }

        int totalScore = 0;
        for(int i = 0; i < 4; i++) 
        {
            totalScore += min(count[i], n);
        }

        cout << totalScore << endl;
    }
    
    return 0;
}