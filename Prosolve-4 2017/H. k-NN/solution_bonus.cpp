#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point
{
    int x, y;
    int pclass;
};

struct PDistance
{
    Point point;
    double distance;
};

double distance(int xd, int yd) {
    return sqrt(pow(xd,2) + pow(yd,2));
}

bool cmp(const PDistance &a, const PDistance &b)
{
    return a.distance < b.distance;
}

int main()
{
    int P;
    cin >> P;
    Point points[P];
    for (int i=0; i<P; i++) {
        cin >> points[i].x >> points[i].y >> points[i].pclass; 
    }

    int T;
    cin >> T;
    for (int i=0; i<T; i++) {

        int I, J, K;
        PDistance pdistance[P];
        cin >> I >> J >> K;

        for (int j=0; j<P; j++) {
            pdistance[j].point = points[j];
            pdistance[j].distance = distance(I-points[j].x, J-points[j].y);
        }

        sort(pdistance, pdistance+P, cmp); 

        int count[3] = {0};
        for (int j=0; j<K; j++) {
            count[pdistance[j].point.pclass]++;
        }

        cout << "Case #" << (i+1) << ": " << (count[1] > count[2] ? 1 : 2) << endl;
    }

    return 0;
}
