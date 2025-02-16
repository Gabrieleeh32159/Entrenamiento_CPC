#include <iostream>
#include <vector>
using namespace std;

int minimoOperaciones(int N) {
    vector<bool> cubierto(N + 1, false);
    int operaciones = 0;

    for (int i = 1; i <= N; i++) {
        if (!cubierto[i]) {
            operaciones++;
            cubierto[i] = true;
            if (2 * i < N+1) {
                cubierto[2*i] = true;
            }
            if (3*i < N+1) {
                cubierto[3*i] = true;
            }
        }
    }

    return operaciones;
}

int main() {
    int N;
    cin >> N;

    int resultado = minimoOperaciones(N);

    cout << resultado - 1 << endl;

    return 0;
}
