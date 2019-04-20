
import random
import numpy as np
import matplotlib.pyplot as plt

def f(x, m, c):
    return m*x + c

N = 100  # max=100
X = 10   # max=10

m, c = random.uniform(-3, 3), random.uniform(-5, 5)

x_list, y_list = [], []

print(N)
for _ in range(N):
    x = random.uniform(-100, 100)
    y = f(x, m, c)
    x, y = x + random.uniform(-40, 40), y + random.uniform(-40, 40)  # pertubate points
    x_list.append(x)
    y_list.append(y)
    print("%.2f %.2f" % (x, y))

plt.scatter(np.asarray(x_list), np.asarray(y_list))
plt.show()

print(X)
for _ in range(X):
    x = random.uniform(-100, 100)
    print("%.2f" % (x))