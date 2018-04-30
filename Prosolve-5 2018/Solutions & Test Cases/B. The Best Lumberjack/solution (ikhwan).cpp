#include<bits/stdc++.h>
using namespace std;
int s[10010];
string name[3] = {"Both","Jason","Jimmy"};

int main()
{
	int n=1,m,a,b;
	cin>>m>>a>>b;
	int c = a-b;
	while(c != 0)
	{
		if(c>0)
		{
			s[n] = 1;
			c -= b;
		}
		else
		{
			s[n] = 2;
			c += a;
		}
		++n;
	}
	n += 1;
	
	while(m--)
	{
		cin>>c;
		cout<<name[s[c%n]]<<endl;
	}
}
