#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n ;
	string str, s;
	cin >> n;
	cin.ignore();
	for(int i=0; i<n; i++)
	{

		std::getline(std::cin, str);
		for (char& c : str)
		{
			s = c;
			if(c == 'Z')
			{
				cout << "A";
				continue;
			}
			if(c == 'z')
			{
				cout << "a";
				continue;
			}
			if(isalpha(c))	
			{
				s = ++c;
			}
			cout << s;
		}		
		cout << endl;
	}
}
