class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank = [0] * n
    
    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, x, y):
        px, py = self.find(x), self.find(y)
        if px == py:
            return
        if self.rank[px] < self.rank[py]:
            px, py = py, px
        self.parent[py] = px
        if self.rank[px] == self.rank[py]:
            self.rank[px] += 1

def solve_mst():
    while True:
        try:
            n, m = map(int, input().split())
            if n == 0 and m == 0:
                break
                
            edges = []
            for _ in range(m):
                u, v, w = map(int, input().split())
                if u > v:
                    u, v = v, u
                edges.append((w, u, v))
            edges.sort()
            
            uf = UnionFind(n)
            mst_edges = []
            total_cost = 0
            components = n
            
            for w, u, v in edges:
                if uf.find(u) != uf.find(v):
                    uf.union(u, v)
                    mst_edges.append((u, v))
                    total_cost += w
                    components -= 1
            
            if components > 1:
                print("Impossible")
            else:
                print(total_cost)
                mst_edges.sort()
                for u, v in mst_edges:
                    print(u, v)
                    
        except EOFError:
            break
if __name__ == "__main__":
    solve_mst()