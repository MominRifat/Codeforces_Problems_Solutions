#include<iostream>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        if(n <= k)
        {
            cout << "1" << endl;
        }
        else if(n - 1 == k)
        {
            cout << "1" << endl;
        }
        else if(n > k)
        {
            cout << n << endl;
        }
    }
    return 0;
}