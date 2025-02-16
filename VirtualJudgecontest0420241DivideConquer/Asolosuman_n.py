MOD = 10000007

[n, k] = [int(x) for x in input().split()]
while (n != 0 and k != 0):
    print((2 * pow(n - 1, k, MOD) + pow(n, k, MOD) + pow(n, n, MOD) + 2*pow(n-1, n-1, MOD))%MOD)
    [n, k] = [int(x) for x in input().split()]