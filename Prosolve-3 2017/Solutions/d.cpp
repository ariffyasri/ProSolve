#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi parseInput(string line) {

    vi scores;

    for(int i=0; i<line.length(); ) {

        int num;
        string strnum = "";

        // skip char other than digit
        while(!isdigit(line[i])) i++;

        // get digit into string
        while(isdigit(line[i])) strnum += line[i++];

        sscanf(strnum.c_str(), "%d", &num);
        scores.push_back(num);
    }

    return scores;
}

vi getScores(vi p) {

    vi scores_frame;
    int cframe=1;

    for(int i=0; i<p.size(); cframe++) {

        int scores = 0;

        if(p[i] == 10 && cframe <= 10) { // if strike
            scores += 10 + p[i+1] + p[i+2];
            i++;
        }
        else if(p[i]+p[i+1] == 10 && cframe <= 10) { // if spare
            scores += 10 + p[i+2];
            i+=2;
        }
        else { // if open frame
            scores += p[i]+p[i+1];
            i+=2;
        }

        scores_frame.push_back(scores);

    }

    return scores_frame;
}

int main() {

    string line;

    while(getline(cin, line)) {

        vi p = getScores(parseInput(line));

        int total=0;

        for(int i=0; i<p.size() && i<10; i++) {
            total += p[i];
            printf("%d\t%d\n", i+1, total);
        }
        
    }

    return 0;
}