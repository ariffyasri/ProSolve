#include <bits/stdc++.h>
using namespace std;

int wordscore(string s)
{
	string p1 = "EeAaLlOoNnRrTtIiSsUu";
	string p2 = "DdGg";
	string p3 = "BbCcMmPp";
	string p4 = "FfHhVvWwYy";
	string p5 = "Kk";
	string p8 = "JjXx";
	string p10 = "QqZz";
	int point = 0;
	for(int i = 0; i < s.length(); i++)
	{
		if(p1.find(s[i]) != string::npos)
			point++;
		else if(p2.find(s[i]) != string::npos)
			point+=2;
		else if(p3.find(s[i]) != string::npos)
			point+=3;
		else if(p4.find(s[i]) != string::npos)
			point+=4;	
		else if(p5.find(s[i]) != string::npos)
			point+=5;	
		else if(p8.find(s[i]) != string::npos)
			point+=8;	
		else if(p10.find(s[i]) != string::npos)
			point+=10;
		else
		{
			point = -1;
			break;	
		}		
	}
	
	return point;
}

int main()
{
	int n;
	string s1, s2, s3, s4;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> s1 >> s2 >> s3 >> s4;
		int maxscore =  wordscore(s1);
		string maxs = s1;
		if(maxscore == -1)
		{
			cout << "Disqualified" << endl;
			continue;
		}
		int nextscore =  wordscore(s2);
		if(nextscore == -1)
		{
			cout << "Disqualified" << endl;
			continue;
		}
		else if(nextscore >= maxscore)
		{
			maxscore = nextscore;
			maxs = s2;
		}
		nextscore =  wordscore(s3);
		if(nextscore == -1)
		{
			cout << "Disqualified" << endl;
			continue;
		}
		else if(nextscore >= maxscore)
		{
			maxscore = nextscore;
			maxs = s3;
		}
		nextscore =  wordscore(s4);
		if(nextscore == -1)
		{
			cout << "Disqualified" << endl;
			continue;
		}
		else if(nextscore >= maxscore)
		{
			maxscore = nextscore;
			maxs = s4;
		}
		cout << maxs << " (" <<maxscore<<")" << endl;
	}
}
