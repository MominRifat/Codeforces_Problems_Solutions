// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        set<char> solved;
        int balloons = 0;

        for(int i = 0; i < n; i++) 
        {
            if(solved.find(s[i]) == solved.end()) 
            {
                balloons += 2;
                solved.insert(s[i]);
            } 
            else 
            {
                balloons += 1;
            }
        }
        
        cout << balloons << endl;
    }
    return 0;
}
