// Created By Momin_Rifat
#include<iostream>
#include<string>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    string team[n];

    for(int i = 0; i < n; i++) 
    {
        cin >> team[i];
    }

    string team1 = team[0];
    string team2;
    int team1Count = 1, team2Count = 0;

    for (int i = 1; i < n; i++) 
    {
        if (team[i] == team1) 
        {
            team1Count++;
        } 
        else 
        {
            team2 = team[i];
            team2Count++;
        }
    }

    if (team1Count > team2Count) 
    {
        cout << team1 << endl;
    } 
    else 
    {
        cout << team2 << endl;
    }

    return 0;
}