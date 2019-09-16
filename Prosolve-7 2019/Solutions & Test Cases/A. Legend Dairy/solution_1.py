def findY(l,x):
    return l - 2.0*x

def findA(x,y):
    return x * y

tc = int(input())

for _loop in range(0,tc):

    total_length = int(input())

    #   x   = length
    #   y   = width
    #   A   = x * width = x * (total_length - 2x)
    #   A   = total_length * x - 2^x
    #dA/dx  = -4x + total_length
    #find critical point
    #   0   = -4x + total_length
    #   x   = total_length/4
    x = total_length/4.0
    y = findY(total_length,x)
    a = findA(x,y)
	
    print("%.1f %.1f %.1f" % (a, x, y))

    #print(a,x,y)
    print()
    
    

    
