// Created By Momin_Rifat
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
	cin >> s;
	if (s[0] == '9')
	{
		cout << s[0];
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] < '5')
			{
				cout << s[i];
			}
			else
			{
				cout << 9 - (s[i] - '0');
			}
		}
	}
	else
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] < '5')
			{
				cout << s[i];
			}
			else
			{
				cout << 9 - (s[i] - '0');
			}
		}
	}
    return 0;
}