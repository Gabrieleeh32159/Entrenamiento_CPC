#include <iostream>
using namespace std;

int solve(int N, int x, int y) {
    int activations = 0;
    int half_size = 1 << (N - 1); // Mitad de 2^N

    // Mientras N sea mayor que 0 (todavía hay cuadrantes más grandes que analizar)
    while (N > 0) {
        // Caso en que el punto está en el cuadrante inferior derecho (x >= mitad, y >= mitad)
        if (x >= half_size && y >= half_size) {
            x -= half_size; // Mover las coordenadas al nuevo sistema de referencia
            y -= half_size;
        }
        // Caso en que el punto está en el cuadrante inferior izquierdo (x < mitad, y >= mitad)
        else if (x < half_size && y >= half_size) {
            y -= half_size; // Mover solo la coordenada y
        }
        // Caso en que el punto está en el cuadrante superior derecho (x >= mitad, y < mitad)
        else if (x >= half_size && y < half_size) {
            x -= half_size; // Mover solo la coordenada x
        }
        // No se hace nada si está en el cuadrante superior izquierdo (x < mitad, y < mitad)

        // Reducir el tamaño de la mitad
        half_size >>= 1;
        N--;  // Reducir el nivel (equivalente a reducir el tamaño del cuadrante)
        activations++;  // Contar la activación
    }

    return activations - 1; // Restamos 1 porque no contamos la última activación
}

int main() {
    int N, x, y;
    cin >> N >> x >> y;

    cout << solve(N, x, y) << endl;

    return 0;
}
