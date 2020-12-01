#include <bits/stdc++.h>
using namespace std;

int main () {
    int k, T;
    cin >> T;
    vector<int> arr;
    string word;
    int value = 0;
    
    while(T--){
    	cin >> k;
    	for(int i=0; i<k; i++){
	        cin >> word;
	        value = 0;
	        for(int j=0; j<word.size(); j++){
	            if(word[j] > 96)
	            {
	                value += word[j] - 96;
	            }
	            else
	            {
	                value += word[j] - 64;
	            }
	        }
	        arr.push_back(value);
	    }
	
	    sort(arr.begin(),arr.end(), greater<int>());
	
	    cout << accumulate(arr.begin(), arr.begin()+3, 0);
    }
}

/*
INPUT

2
5
Welcome
to
Prosolve
National
TwentyTwenty

6
Good
luck
and
have
fun
everyone

OUTPUT
422
445
*/
