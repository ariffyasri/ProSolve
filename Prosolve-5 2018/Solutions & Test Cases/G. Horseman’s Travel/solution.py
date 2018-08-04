
def main():

    CHESS_SIZE = (8,8)
    STARTING = (0,0)

    def legal_coordinate(x, y):
        return x >= 0 and y >= 0 and x < CHESS_SIZE[0] and y < CHESS_SIZE[1]

    # all possible knight moves
    moves = ((-1,2),(1,2),(2,1),(2,-1),(1,-2),(-1,-2),(-2,1),(-2,-1))

    # technique: breadth-first search
    # all calculated distances will be stored inside `travelled`
    queue = [(STARTING[0], STARTING[1], 0)]  # format -> (x,y,dist)
    travelled = {}
    while len(queue) > 0:
        x, y, dist = queue[0]
        for move in moves:
            nx, ny = x+move[0], y+move[1]
            if legal_coordinate(nx, ny):
                if (nx,ny) not in travelled:
                    queue.append((nx, ny, dist+1))
        travelled[(x,y)]=dist
        del queue[0]
    
    # now proceed with problem input below
    for _ in range(int(input())):
        coordinate = input()
        x = ord(coordinate[0])-ord('A')
        y = int(coordinate[1])-1
        print(travelled[(x,y)])

if __name__ == '__main__':
    main()