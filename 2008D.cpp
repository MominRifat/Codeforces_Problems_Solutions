// Created By Momin_Rifat
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solve() 
{
    int n;
    cin >> n;
    
    vector<int> p(n);
    vector<int> F(n);
    vector<bool> visited(n, false);
    string s;
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> p[i];
        p[i]--;
    }
    
    cin >> s;
    
    for(int i = 0; i < n; ++i) 
    {
        if(!visited[i]) 
        {
            vector<int> cycle;
            int cur = i;
            int blackCount = 0;
            
            while(!visited[cur]) 
            {
                visited[cur] = true;
                cycle.push_back(cur);
                if (s[cur] == '0') 
                {
                    blackCount++;
                }
                cur = p[cur];
            }
            for(int index : cycle) 
            {
                F[index] = blackCount;
            }
        }
    }
    
    for(int i = 0; i < n; ++i) 
    {
        cout << F[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        solve();
    }
    return 0;
}