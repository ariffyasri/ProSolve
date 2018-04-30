
import math

def dist(a, b):
    return math.sqrt((a[0]-b[0])**2 + (a[1]-b[1])**2)

def closest(points):

    min_dist = int(1e9)

    if len(points) <= 5:

        for i in range(len(points)):
            for j in range(i+1, len(points)):
                min_dist = min(min_dist, dist(points[i], points[j]))
        return min_dist
        
    else:

        # divide & conquer
        mid_point = int(len(points) / 2)
        left_dist = closest(points[:mid_point])     # left-side
        right_dist = closest(points[mid_point+1:])    # right-side

        # merge those two regions' result
        min_dist = min(left_dist, right_dist)

        # now we need to consider if there are two points that cross our middle line
        nearMidPoints = []

        for point in points:
            if abs(point[0]-points[mid_point][0]) < min_dist:
                nearMidPoints.append(point)

        # sort by Y-axis
        nearMidPoints.sort(key=lambda x: x[1])

        for i in range(len(nearMidPoints)):
            for j in range(i+1, len(nearMidPoints)):
                d = dist(nearMidPoints[i], nearMidPoints[j])
                if d >= min_dist: break
                min_dist = d
        
        return min_dist

def main():

    N = int(input())
    points = []
    for _ in range(N):
        points.append(tuple(map(float, input().split())))

    # sort by X-axis
    points.sort(key=lambda x: x[0])

    print("%.4f" % closest(points))

if __name__ == "__main__":
    main()