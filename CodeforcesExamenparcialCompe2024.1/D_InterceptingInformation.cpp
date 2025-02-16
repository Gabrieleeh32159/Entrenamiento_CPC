// time-limit: 250
// problem-url: https://codeforces.com/gym/557506/problem/D
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;

template<typename T>
void print(vector<T> &vec){
    for(auto &x:vec) cout<<x<<' ';
    cout<<'\n';
}
template<typename T>
void print(vector<pair<T,T>> &vec){
    for(auto &x:vec) cout<<x.first<<' '<<x.second<<'\n';
}
void barra(){ cout<<"----------------------"<<'\n'; }


void solve(){
    int n; // Variable que almacenará los números de entrada
    bool success = true; // Variable que rastrea si todas las lecturas fueron exitosas

    // Bucle que itera exactamente 8 veces (ya que siempre hay 8 bits en la entrada)
    for (int i = 0; i < 8; i++) {
        cin >> n; // Lee cada número de la entrada
        if (n == 9) { // Si el número es 9, significa que hubo un fallo en la lectura
            success = false; // Indica que la lectura falló
        }
    }

    // Si no hubo fallos (es decir, no se encontró ningún 9), imprime "S"
    if (success) {
        cout << "S" << endl;
    } else { // Si al menos una lectura falló, imprime "F"
        cout << "F" << endl;
    }
}
// La complejidad temporal es O(1) porque siempre se itera 8 veces.

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
}
