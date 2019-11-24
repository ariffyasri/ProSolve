#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x1,x2,x3;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> x1 >> x2 >> x3;
		if(abs(x2 - x1) == abs(x2-x3))
			cout << "Spaced Out" << endl;
		else
			cout << "NOT Spaced Out" << endl;
	}
}
