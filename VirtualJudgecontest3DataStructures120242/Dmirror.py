n = int(input())

letters = [input() for _ in range(n)]

pos = []

for i in range(len(letters)):
    if letters[i] == 'O':
       pos.append(i)
    
sum = 0
   
for p in pos:
    sum += 2**(len(letters) - p - 1)
    
print(sum)
    