
#include <bits/stdc++.h> 
using namespace std; 

int cntsq(int l, int w) 
{ 
	if (w < l) 
		swap(l, w); 
	return l * (l + 1) * (2 * l + 1) / 6 + (w - l) * l *(l + 1) / 2; 
} 
 
int main() 
{ 
	int l,w,c;
	cin>>c;
	for(int i=0;i<c;i++)
	{
		cin>>l>>w; 
		cout << "Number of squares are "<<cntsq(l,w)<<endl; 
	}
	return 0;
} 

