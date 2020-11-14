#include<bits/stdc++.h>
using namespace std;

struct Point					// To store the co-ordinates of every point
{
    int x, y;
};
// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0; 	 // colinear
    return (val > 0)? 1: 2; 	// clock or counterclock wise
}

bool sortPoint(Point a, Point b)
{
	return (a.x+a.y) < (b.x+b.y);
}

// Prints convex hull of a set of n points
void convexHull(vector<Point> points)
{
    // There must be at least 3 points
    if (points.size() < 3) return;
    // Initialize Result
    vector<Point> hull;
    // Find the leftmost point
    int l = 0;
    for (int i = 1; i < points.size(); i++)
        if (points[i].x < points[l].x)
            l = i;
    // Start from leftmost point, keep moving counterclockwise
    // until reach the start point again.  This loop runs O(h)
    // times where h is number of points in result or output.
    int p = l, q;
    do
    {
        // Add current point to result
        hull.push_back(points[p]);
        // Search for a point 'q' such that orientation(p, x,
        // q) is counterclockwise for all points 'x'. The idea
        // is to keep track of last visited most counterclock-
        // wise point in q. If any point 'i' is more counterclock-
        // wise than q, then update q.
        q = (p+1)%points.size();
        for (int i = 0; i < points.size(); i++)
        {
           // If i is more counterclockwise than current q, then
           // update q
           if (orientation(points[p], points[i], points[q]) == 2)
               q = i;
        }
        // Now q is the most counterclockwise with respect to p
        // Set p as q for next iteration, so that q is added to
        // result 'hull'
        p = q;
    } while (p != l);  // While we don't come to first point
    // Print Result
    sort(hull.begin(), hull.end(), sortPoint);
    for (int i = 0; i < hull.size(); i++)
    	cout << hull[i].x << " " << hull[i].y << endl;
}


int main()
{
	int n;
	int x,y;
	cin >> n;
	vector<Point> p;
	for(int i=0;i < n; i++)
	{
		cin >> x >> y;
		p.push_back({x, y});
	}
	convexHull(p);
    return 0; 
}
