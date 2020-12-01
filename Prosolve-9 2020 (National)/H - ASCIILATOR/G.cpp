#include <bits/stdc++.h>

using namespace std;

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

void decToOctal(int n)
{
    int octalNum[100];
 
    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
        cout << octalNum[j];
}

void decToHexa(int n) 
{    
    char hexaDeciNum[100]; 
       
    int i = 0; 
    while(n!=0) 
    {    
        int temp  = 0; 
          
        temp = n % 16; 
          
        if(temp < 10) 
        { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
          
        n = n/16; 
    } 
    
    for(int j=i-1; j>=0; j--) 
        cout << hexaDeciNum[j]; 
}

int main()
{
    long long b, n;
    int T;
    cin >> T;
    
    while(T--){
    	
		cin >> b;
	    n = convertBinaryToDecimal(b);
	 	decToOctal(n);
	 	cout << " " << n << " ";
	 	decToHexa(n);
	 	//if(n>57){
	 	//	cout <<" "<< '0'+n-48;	
		//}
		//else{
			cout <<" "<< static_cast<char>(n);
		//}
	 	
	}
}

/*
ASCII TABLE
Input
3
110
1101
11011

Output
6 6 6 54
15 13 D 61
33 27 1B 75
*/


