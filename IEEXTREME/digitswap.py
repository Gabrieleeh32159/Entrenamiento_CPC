[digits, k] = input().split()
k = int(k)
digits = [x for x in digits]
n = len(digits)


for i in range(n):
    if k == 0:
        break
    
    max_digit = max(digits[i:])
    if digits[i] == max_digit:
        continue 

    max_pos = -1
    for j in range(n - 1, i, -1):
        if digits[j] == max_digit:
            max_pos = j
            break

    if max_pos != -1 and digits[max_pos] > digits[i]:
        digits[i], digits[max_pos] = digits[max_pos], digits[i]
        k -= 1

print("".join(digits))