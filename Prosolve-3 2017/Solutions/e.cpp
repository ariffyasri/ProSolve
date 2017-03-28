#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore(); 

    string str;
    getline(cin, str);

    for(int i=0; i<str.length(); i++)
        if(isalpha(str[i]))
            cout << (char)('A' + ((str[i]-'A'+n) % 26));
        else
            cout << str[i];
        
    cout << endl;

    return 0;
}