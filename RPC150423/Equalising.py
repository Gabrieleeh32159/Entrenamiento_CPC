from math import sqrt

[n , x] = [int(_) for _ in input().split()]

numbers = [int(num) for num in input().split()]

avg = sum([num**2 for num in numbers])/n

k = sqrt(x / avg)

for num in numbers:
    print(num*k, end=" ")
