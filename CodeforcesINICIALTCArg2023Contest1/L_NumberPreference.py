n = int(input())

gustos = set()
disgustos = set()

primer_gusto = True

for i in range(n):
    preferencias_amigo = [int(x) for x in input().split()]
    if preferencias_amigo[0] == 1:
        if primer_gusto:
            gustos = set(preferencias_amigo[2:])
            primer_gusto = False
        else:
            gustos = gustos&set(preferencias_amigo[2:])
    else:
        disgustos = disgustos | set(preferencias_amigo[2:])

if len(gustos) != 0:
    print(len(gustos - disgustos))
else:
    print(10**18 - len(disgustos))