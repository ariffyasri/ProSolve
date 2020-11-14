#include <bits/stdc++.h>
using namespace std;

int collatz(int s)
{
	if(s == 1)
	{
		return 0;
	}
	
	if(s % 2 == 0)
		return s / 2;
	else
		return s * 3 + 1;
}

int main()
{
	int n;
	int s;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> s;
		int j = 0;
		while(s != 0)
		{
			s = collatz(s);
			j++;
		}
		cout << j << endl;
	}
}
