n = int(input())

numbers = [float(x) for x in input().split()]

sum = 0
for num in numbers:
    sum += num*num*num

sum = pow(sum, 1/3)
print(round(sum, 7))