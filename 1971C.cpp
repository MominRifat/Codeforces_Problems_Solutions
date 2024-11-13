// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        bool c1 = false, c2 = false;
        int temp = max(a,b);
        a = min(a,b);
        b = temp;
        for(int i = a; i <=b; i++)
        {
            if(c==i)
            {
                c1 = true;
            }
            if(d==i)
            {
                c2 = true;
            }
        }
        if((c1 && c2) || (!c1 && !c2))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}