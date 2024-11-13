// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    cin >> tc;
    
    unordered_map<string, int> username_count;
    
    for(int i = 0; i < tc; i++) 
    {
        string reg;
        cin >> reg;
        
        if (username_count.find(reg) == username_count.end()) 
        {
            cout << "OK" << endl;
            username_count[reg] = 1;
        } 
        else 
        {
            cout << reg << username_count[reg] << endl;
            username_count[reg]++;
        }
    }
    
    return 0;
}