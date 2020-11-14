#include <bits/stdc++.h>
using namespace std;

string lookandsay(string s)
{
	ostringstream os;
	
	for(size_t i = 0; i != s.length(); )
	{
		auto newi = s.find_first_not_of(s[i], i+1);
		
		if(newi ==  string::npos)
			newi = s.length();
			
		os << newi - i << s[i];
		i = newi;	
	}	
	
	return os.str();
}

int main()
{
	int n;
	string s;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> s;
		cout << lookandsay(s) << endl;
	}
}
