/**
    @author: Daniel Diaz
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t, n;
    vector<string> matriz;
    string s, respuesta;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        matriz.assign(n, "");
        for (int i = 0; i < n; ++i) {
            cin >> s;
            matriz[i] = s;
        }
        respuesta = "YES";
        for (int i = 0; i < n - 1; ++i) {
            if (respuesta == "NO") break;
            for (int j = 0; j < n - 1; ++j) {
                if (matriz[i][j] == '1' && matriz[i + 1][j] == '0' && matriz[i][j + 1] == '0') {
                    respuesta = "NO";
                    break;
                }
            }
        }
        printf("%s\n", respuesta.c_str());
    }
}