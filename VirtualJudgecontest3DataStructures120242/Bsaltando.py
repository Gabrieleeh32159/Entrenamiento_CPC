while True:
    try:
        a = [int(x) for x in input().split()]
    except EOFError:
        break    

    numbers = [False for _ in range(a[0] + 1)]
    
    valid = True
    
    for i in range(1, len(a) - 1):
        diff = abs(a[i] - a[i + 1])
        if diff > a[0] - 1 or (numbers[diff]):
            valid = False
        else:
            numbers[diff]
    
    if valid:
        print('Jolly')
    else:
        print('Not jolly')