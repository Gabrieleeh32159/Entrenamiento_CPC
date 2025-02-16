# a simple parser for python. use get_number() and get_word() to read
def parser():
    while 1:
        data = list(input().split(' '))
        for number in data:
            if len(number) > 0:
                yield(number)   

input_parser = parser()

def get_word():
    global input_parser
    return next(input_parser)

def get_number():
    data = get_word()
    try:
        return int(data)
    except ValueError:
        return float(data)

# numpy and scipy are available for use
n = get_number()

if n == 1:
    print(0)
    exit()

import math

log3n = math.log(n) / math.log(3)
    
x = round(log3n)

if 3 ** x == n:
    print(x)
else:
    print(-1)