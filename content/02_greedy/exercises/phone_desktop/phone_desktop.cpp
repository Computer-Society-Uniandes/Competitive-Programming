/**
    @author: Daniel Diaz
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, x, y, screens;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld %lld", &x, &y);
        screens = 0;
        while (y > 0) {
            if (y == 1) {
                y--;
                x -= 11;
                screens++;

            }
            else {
                y -= 2;
                x -= 7;
                screens++;
            }
        }
        while (x > 0) {
            x -= 15;
            screens++;
        }
        printf("%d\n", screens);
    }
}