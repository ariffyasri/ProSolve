#include<bits/stdc++.h>
using namespace std;

struct Fertilizer
{
	int a1, a2, b1, b2, fc;
};
struct Query
{
	int c1, c2;
	size_t when;
	int total;
};

int main()
{
	int n, a1, a2, b1, b2, fc, c1, c2;
	size_t l;
	char p;
	cin >> n >> l;
	vector<Fertilizer> f;
	vector<Query> q;
	for(size_t i=0, j=0; i<l; i++)
	{
		cin >> p;
		if(p == 'F')
		{
			cin >> a1 >> a2 >> b1 >> b2 >> fc;
			f.push_back({a1, a2, b1, b2, fc});
			j++;
		}
		else
		{
			cin >> c1 >> c2;
			q.push_back({c1, c2, j, 0});
		}
	}
	
	for(size_t i=0; i <f.size(); i++)
	{
		for(size_t j=0; j<q.size(); j++)
		{
			if(q[j].c1 >= f[i].a1 && q[j].c1 <=f[i].b1 && q[j].c2 >= f[i].a2 && q[j].c2 <= f[i].b2 && i < q[j].when )
			{
				q[j].total += f[i].fc;
				
			}
			if(i == q[j].when-1)
				cout << q[j].total << endl;
		}
	}
}
