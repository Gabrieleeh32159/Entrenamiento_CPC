n = int(input())

nums = [int(x) for x in input().split()]
mayores = [0] * n
menores = [0] * n

mayores[0] = nums[0]
menores[-1] = nums[-1]

for i in range(1, n):
    mayores[i] = max(mayores[i - 1], nums[i])

for i in range(n - 2, -1, -1):
    menores[i] = min(menores[i + 1], nums[i])

counter = 0
if nums[0] < menores[1]:
    counter += 1
if nums[-1] >= mayores[-2]:
    counter += 1 
for i in range(1, n - 1):
    if nums[i] >= mayores[i - 1] and nums[i] < menores[i + 1]:
        counter += 1
print(counter)