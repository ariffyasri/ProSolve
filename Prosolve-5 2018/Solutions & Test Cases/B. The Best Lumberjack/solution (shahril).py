
from collections import OrderedDict

def main():

    n, x, y = map(int, input().split())

    table = []

    ix, iy = 1,1
    while ix <= x or iy <= y:
        if ix*x < iy*y:
            table.append(1)
            ix += 1
        elif ix*x > iy*y:
            table.append(2)
            iy += 1
        else:
            table += [0,0]
            break

    for _ in range(n):
        h = (int(input())-1) % len(table)
        print(["Both", "Vova", "Vanya"][table[h]])

if __name__ == '__main__':
    main()