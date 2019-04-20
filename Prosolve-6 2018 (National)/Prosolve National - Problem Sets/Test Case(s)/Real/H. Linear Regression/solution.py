
def simple_linreg(x, y):
    xavg = sum(x) / len(x)
    yavg = sum(y) / len(y)
    xdiff = [ xi - xavg for xi in x ] 
    ydiff = [ yi - yavg for yi in y ]
    xy = [ xdiff[i] * ydiff[i] for i in range(len(x)) ]
    xx = [ xdiff[i] * xdiff[i] for i in range(len(x)) ]
    gradient = sum(xy) / sum(xx)
    intercept = yavg - gradient * xavg
    return (gradient, intercept)

def main():

    N = int(input())
    x,y = [],[]
    for _ in range(N):
        xin, yin = map(float, input().split())
        x.append(xin)
        y.append(yin)
    
    gradient, intercept = simple_linreg(x,y)
    print("{:.4f} {:.4f}".format(gradient, intercept))

    X = int(input())
    for _ in range(X):
        x = float(input())
        y = intercept + gradient * x
        print("{:.4f}".format(y))

if __name__ == '__main__':
    main()