import math

[n, R, r] = [int(x) for x in input().split()]

print(round(n*r*R*math.sin(math.pi/n), 10))