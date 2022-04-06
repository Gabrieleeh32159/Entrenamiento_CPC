#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int  len, res, suma = 0;
		cin >> len >> res;
		for (int j = 0; j < len; j++) {
            int a;
            cin >> a;
            suma += a;
        }
        if (suma == res){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
	return 0;
}