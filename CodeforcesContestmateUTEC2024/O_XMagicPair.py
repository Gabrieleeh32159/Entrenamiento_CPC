import math

def is_x_magic(a, b, x):
    if a == x or b == x:
        return True
    if x > a and x > b:
        return False
    gcd_ab = math.gcd(a, b)
    return x % gcd_ab == 0

t = int(input().strip())

for _ in range(t):
    a, b, x = map(int, input().split())
    if is_x_magic(a, b, x):
        print("YES")
    else:
        print("NO")