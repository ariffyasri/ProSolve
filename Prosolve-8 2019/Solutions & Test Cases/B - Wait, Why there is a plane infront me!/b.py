import math

def main():
    n = int(input())
    second = input().split(" ")
    x = int(second[0])
    y = int(second[1])
    rad = int(second[2])

    for i in range(n):
        third = input().split(" ")
        px = int(third[0])
        py = int(third[1])
        if math.sqrt((px-x)**2+(py-y)**2) <= rad:
            print("ALERT")
            break;

main()