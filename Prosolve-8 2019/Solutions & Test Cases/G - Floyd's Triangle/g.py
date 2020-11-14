for _ in range(int(input())):

    # Print a Floyd's Triangle
    # Range of the triangle
    size = int(input())
    k = 1
    # 2 for loops, one for column looping another for row looping
    # i loop for column looping and j loop for row looping
    for i in range(1, size + 1):
        for j in range(1, i + 1):
            print(k, end=" ")
            k = k + 1
        print()
    k= k-1
    for i in range(size ,0,-1):
        for j in range(i ,0,-1):
            print(k, end=" ")
            k = k -1
        print()