import functools


class Point(object):
    __slots__ = ('x', 'y')


def orientation(p, q, r):
    val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y)
    if val == 0:
        return 0;
    return 1 if val > 0 else 2


def sortPoint(a, b):
    # if (a.x + a.y) - (b.x + b.y):
    #     return 1
    # else:
    #     return -1;
    return (a.x + a.y) - (b.x + b.y)


def convexHull(points):

    if len(points) < 3:
        return
    hull = []
    la = 0
    for i in range(1, len(points)):
        if points[i].x < points[la].x:
            la = i
    p = la
    while True:
        hull.append(points[p])
        q = (p + 1) % len(points)
        for i in range(len(points)):
            if orientation(points[p], points[i], points[q]) == 2:
                q = i
        p = q
        if p == la:
            break
    hull.sort(key=functools.cmp_to_key(sortPoint))
    for i in hull:
        print(i.x, i.y)


def main():
    n = int(input())
    p = []
    for i in range(n):
        x, y = [int(a) for a in input().split()]
        point = Point()
        point.x = x
        point.y = y
        p.append(point)

    convexHull(p)


main()
