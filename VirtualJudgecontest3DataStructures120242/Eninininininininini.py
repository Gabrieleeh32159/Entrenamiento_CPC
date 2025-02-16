
def solve():
    sounds = input().split()
    stdin = input()
    s = []
    while stdin != "what does the fox say?":
        s.append(stdin.split()[-1])
        stdin = input()
    fox = [sound for sound in sounds if sound not in s]
    print(" ".join(fox))
            
    

t = int(input())
while (t):
    solve()
    t -= 1