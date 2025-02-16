#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Función para determinar los valores de x e y en el gráfico copo de nieve
pair<int, int> obtener_xy(const vector<vector<int>>& adyacencias, int n) {
    int x = 0, y = 0;
    unordered_map<int, int> grados;

    // Calcular el grado de cada nodo
    for (int i = 1; i <= n; i++) {
        grados[i] = adyacencias[i].size();
    }

    // Buscar el vértice central, que es el vértice con el mayor grado
    int vertice_central = -1;
    for (int i = 1; i <= n; i++) {
        if (grados[i] > x) {
            vertice_central = i;
            x = grados[i];
        }
    }

    // Calcular x: número de vértices conectados directamente al vértice central
    x = adyacencias[vertice_central].size();

    // Para calcular y, tomamos los grados de los vecinos del vértice central
    // y restamos 1 porque una de sus conexiones es con el vértice central
    unordered_map<int, int> conteo_y;
    for (int vecino : adyacencias[vertice_central]) {
        int grado_vecino = grados[vecino] - 1;
        conteo_y[grado_vecino]++;
    }

    // Encontrar el valor más común de los grados de los vecinos
    for (const auto& par : conteo_y) {
        if (par.second > y) {
            y = par.first;
        }
    }

    return {x, y};
}

int main() {
    int t;
    cin >> t; // Leer el número de casos de prueba

    while (t--) {
        int n, m;
        cin >> n >> m; // Leer el número de vértices y aristas

        vector<vector<int>> adyacencias(n + 1); // Lista de adyacencias

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v; // Leer la arista entre los vértices u y v
            adyacencias[u].push_back(v);
            adyacencias[v].push_back(u);
        }

        // Obtener los valores de x e y
        pair<int, int> resultado = obtener_xy(adyacencias, n);

        // Imprimir el resultado
        cout << resultado.first << " " << resultado.second << endl;
    }

    return 0;
}