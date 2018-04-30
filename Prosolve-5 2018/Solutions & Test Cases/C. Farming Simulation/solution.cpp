#include <iostream>
using namespace std;
int main()
{
	int n,k,t,c,c1,ans;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n>>k;
		cin>>c1;
		ans=c1-1;
		c=c1;
		for (int i = 1; i < k; ++i)
		{
			cin>>c1;
			ans=max(ans,(c1-c)/2);
			c=c1;
		}
		ans=max(ans,n-c);
		cout<<ans+1<<endl;
	}
	return 0;
}
