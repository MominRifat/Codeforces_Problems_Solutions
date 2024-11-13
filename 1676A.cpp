//Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string number;
        int first_3_number_count = 0;
        int last_3_number_count = 0;
        
        cin >> number;

        for(int i = 0; i < 6; i++)
        {
            number[i] = number[i] - '0';
        }
        first_3_number_count = number[0] + number[1] + number[2];
        last_3_number_count = number[3] + number[4] + number[5];
        if(first_3_number_count == last_3_number_count)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}