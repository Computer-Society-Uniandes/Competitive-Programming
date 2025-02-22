/**
    @author: Daniel Diaz
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t, n, respuesta, actual;
    vector<int> numeros;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        respuesta = n - 1;
        numeros.assign(n, 0);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &numeros[i]);
        }
        for (int i = 0; i < n; ++i) {
            actual = i;
            for (int j = i + 1; j < n; ++j) {
                if (numeros[j] > numeros[i]) {
                    actual += 1;
                }
            }
            respuesta = min(respuesta, actual);
        }
        printf("%d\n", respuesta);
    }
}