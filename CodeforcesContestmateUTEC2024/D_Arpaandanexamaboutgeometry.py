

[ax, ay, bx, by, cx, cy] = [int(x) for x in input().split()]

crossp = (ax - bx) * (cy - by) - (ay - by) * (cx - bx);

(bx - ax)**2 + (by - ay)**2
if (crossp != 0 and ((bx - ax)**2 + (by - ay)**2 == (cx - bx)**2 + (cy - by)**2)):
    print("Yes")
else:
    print("No")