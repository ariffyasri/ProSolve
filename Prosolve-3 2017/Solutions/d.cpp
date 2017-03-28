#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;

vector<ii> parseInput(string line) {

    vi scores;
    vector<ii> scores_pair;

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

    for(int i=0; i<scores.size(); ) {
        
        if(scores[i] == 10) {
            scores_pair.push_back(make_pair(10, 0));
            i++;
        } else {
            scores_pair.push_back(make_pair(scores[i], scores[i+1]));
            i += 2;
        }
    }

    return scores_pair;
}

vi getScores(vector<ii> p) {

    vi scores_frame;

    for(int i=0; i<p.size(); i++) {

        int scores=0;

        if(p[i].first == 10 && i < 10) { // if strike
            
            scores += 10;
            int j=i+1;

            for(int j = i+1; ;j++) {
                if(p[j].first == 10) {
                    scores += 10;
                } else if (j-i == 1) {
                    scores += p[j].first + p[j].second;
                    break;
                } else {
                    scores += p[j].first;
                    break;
                }
            }
        }
        else if(p[i].first+p[i].second == 10 && i < 10) { // if spare
            scores += 10 + p[i+1].first;
        }
        else { // open frame OR round 11 or round 12
            scores += p[i].first + p[i].second;
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