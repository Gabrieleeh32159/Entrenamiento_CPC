from math import pi, floor

[n, e] = [int(x) for x in input().split()]

rs = [int(x) for x in input().split()]


sum = 0
for r in rs:
    print(f"R: {r} Perimetro: {2*pi*r} Puntos: {2*pi*r/e}")
    sum += floor(2*pi*r/e)

print(sum)
