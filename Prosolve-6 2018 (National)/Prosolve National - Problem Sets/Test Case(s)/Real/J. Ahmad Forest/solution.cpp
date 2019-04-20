#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pii;
#define REP(i,n) for(ll i=0;i<n;i++)

#ifdef DEBUG
#define dbg(x) x
#define dbgp(x) cerr << x << endl;
#else
#define dbg(x) //x
#define dbgp(x) //cerr << x << endl;
#endif

#define MAX_N 100010

int n, k, d;

ll leftEdgeTree[MAX_N * 4];
ll rightEdgeTree[MAX_N * 4];
ll addFactorTree[MAX_N * 4];
ll segmentCountTree[MAX_N * 4];

void updateTree(int startIdx, int segmentStart, int segmentEnd, int updateStart, int updateEnd, int addition){
    if (updateStart >= segmentEnd || updateEnd <= segmentStart) return;
    if (segmentEnd - segmentStart <= 1){
        addFactorTree[startIdx] += addition;
        leftEdgeTree[startIdx] = addFactorTree[startIdx] % k;
        rightEdgeTree[startIdx] = addFactorTree[startIdx] % k;
        segmentCountTree[startIdx] = 1;
        dbgp("Child " << startIdx << " " << segmentStart << " " << segmentEnd << " " << updateStart << " " << updateEnd << " " << addition); 
        return;
    }

    int leftChild = startIdx*2;
    int rightChild = startIdx*2 + 1;

    if (updateStart <= segmentStart && updateEnd >= segmentEnd){
        // No need to propagate here
        addFactorTree[startIdx] += addition;
        dbgp("NP " << addFactorTree[startIdx]);
    } else {
        updateTree(leftChild, segmentStart, segmentStart + (segmentEnd-segmentStart)/2, updateStart, updateEnd, addition);
        updateTree(rightChild, segmentStart + (segmentEnd-segmentStart)/2, segmentEnd, updateStart, updateEnd, addition);
    }
    dbgp("Inner " << startIdx << " " << segmentStart << " " << segmentEnd << " " << updateStart << " " << updateEnd << " " << addition); 

    if (rightEdgeTree[leftChild]%k == leftEdgeTree[rightChild]%k){
        segmentCountTree[startIdx] = segmentCountTree[leftChild] + segmentCountTree[rightChild] -1;
    } else {
        segmentCountTree[startIdx] = segmentCountTree[leftChild] + segmentCountTree[rightChild];
    }
    leftEdgeTree[startIdx] = leftEdgeTree[leftChild] + addFactorTree[startIdx];
    rightEdgeTree[startIdx] = rightEdgeTree[rightChild] + addFactorTree[startIdx];
    dbgp("Child segment " << segmentCountTree[leftChild] << " " << segmentCountTree[leftChild] << " " << segmentCountTree[startIdx]);
    dbgp("Child segment j " << rightEdgeTree[leftChild] << " " << leftEdgeTree[leftChild] << " " << segmentCountTree[startIdx]);
    dbgp("Edge " << leftEdgeTree[startIdx] << " " << rightEdgeTree[startIdx] << " " << segmentCountTree[startIdx]);
}

int main(){
    cin >> n >> k >> d;

    memset(leftEdgeTree, 0, sizeof(leftEdgeTree));
    memset(rightEdgeTree, 0, sizeof(rightEdgeTree));
    memset(addFactorTree, 0, sizeof(addFactorTree));
    memset(segmentCountTree, 0, sizeof(segmentCountTree));
    REP(i, n*4+2){
        segmentCountTree[i] = 1;
    }

    REP(i, d) {
        dbgp("Day " << i);
        int start, end, addition;
        cin >> start >> end >> addition;
        start--;
        updateTree(1, 0, n, start, end, addition);
        cout << segmentCountTree[1] << endl;
    }
}

/*
 * 5 5 5 5
 * 4 5 5 5
 * 4 1 1 1 
 * 4 1 2 2
 *
*/
