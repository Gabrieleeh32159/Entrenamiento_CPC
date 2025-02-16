n = int(input())

for _ in range(n):
    [a, b] = input().split()
    
    print(a**b % 1000000007)