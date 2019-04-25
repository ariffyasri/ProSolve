#include <bits/stdc++.h> 
using namespace std; 
  
bool checkCode(int n) 
{ 
    int num1 = n / 100; 
    int num2 = (n / 10) % 10; 
    int num3 = n % 10; 
    int sum = num1 + num2 + num3; 
  
    if (n == (sum*22))
		return true; 
    return false; 
} 
  
int main() 
{ 
	int n,c;
	cin>>c;
	for(int i=0;i<c;i++)
	{
		cin>>n;
	    if (checkCode(n)) 
	        cout<<n<<" is an osiris number"<<endl; 
	    else
	        cout<<n<<" is not an osiris number"<<endl; 
	}
    return 0; 
}



