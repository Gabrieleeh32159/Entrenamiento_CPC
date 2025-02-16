def solve():
    t = int(input().strip())
    
    for _ in range(t):
        n, d, h = map(int, input().split())
        y = list(map(int, input().split()))
        
        # Área base de un triángulo
        area_base = 0.5 * d * h
        total_area = 0.0
        
        for i in range(n):
            total_area += area_base
            if i > 0 and y[i] < y[i - 1] + h:
                # Cálculo de superposición si los triángulos se solapan
                overlap_height = h - (y[i] - y[i - 1])
                overlap_area = 0.5 * d * overlap_height
                total_area -= overlap_area
        
        # Imprimir el resultado con precisión de 6 decimales
        print(f"{total_area:.6f}")

# Ejecutar la función para leer la entrada y resolver los casos
solve()