n = int(input())
pila = [int(x) for x in input().split()]
temperatura = [int(x) for x in input().split()]

nieve_derretida = []

for i in range(n):
    nieve_del_dia = 0
    for k in range(i+1):
        nieve_del_dia += min(temperatura[i], pila[k])
        pila[k] = max(pila[k]-temperatura[i], 0)
    nieve_derretida.append(nieve_del_dia)

print(" ".join([str(x) for x in nieve_derretida]))