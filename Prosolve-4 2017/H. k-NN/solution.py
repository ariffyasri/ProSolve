import math

point = []

P = int(input())
for i in range(P):
    curr_point = list(map(int, input().split(" ")))
    point.append(curr_point)

T = int(input())
for i in range(T):
    
    I, J, K = list(map(int, input().split(" ")))

    distances = []
    for each in point:
        dist = math.hypot(I-each[0], J-each[1])
        distances.append(each + [dist])

    # sort by distance
    distances = sorted(distances, key=lambda x: x[-1])

    count = [0, 0, 0]
    for each in distances[:K]:
        count[each[2]] += 1

    print("Case #{}: {}".format(i+1, 1 if count[1] > count[2] else 2))