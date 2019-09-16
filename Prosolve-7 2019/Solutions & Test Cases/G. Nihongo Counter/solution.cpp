#include <bits/stdc++.h> 
using namespace std;
int main ()
{
    //char str[50];
    string str;
	int v,c;

    cin>>c;
    cin.ignore();
	for(int i=0;i<c;i++)
	{
		v=0;
	    //gets(str);
	    getline(cin, str);
	    for (int i = 0; str[i]!='\0'; ++i)
	    {	
		    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
				++v;
		    if((str[i]=='n' || str[i]=='N') && (str[i+1] != 'a' && str[i+1] != 'e' && str[i+1] != 'i' && str[i+1] != 'o' && str[i+1] != 'u' && str[i+1] != 'A' && str[i+1] != 'E' && str[i+1] != 'I' && str[i+1] != 'O' && str[i+1] != 'U' ))
				++v;
	    }
	    cout<<v<<endl;
	}
}
