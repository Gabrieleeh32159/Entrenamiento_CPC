n = int(input())

for _ in range(n):
    [a, b] = [int(x) for x in input().split()]
    
    print(pow(a, b, 1000000007))