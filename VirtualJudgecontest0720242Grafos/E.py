n, m = map(int, input().split()) 
graph = [[] for _ in range(n + 1)]  

for i in range(m):  
    v_i, u_i = map(int, input().split()) 
    graph[u_i].append(v_i)  
    graph[v_i].append(u_i)  

cnj = set(i for i in range(n + 1) if len(graph[i]) == 2)  
res = 0  

while cnj:  
    i = cnj.pop()  
    v, u = graph[i]  
    while u in cnj:  
        cnj.remove(u)  
        v_i, u_i = graph[u]  
        if v_i in cnj:  
            u = v_i  
        elif u_i in cnj:  
            u = u_i  
        else:  
            break  
    if v == u:  
        res += 1  

print(res)