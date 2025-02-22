/**
    @author: Daniel Diaz
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, m,a,b,c, rem;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        rem = m - min(m, a) + m - min(m, b);
        printf("%d\n", min(rem, c) + min(m, a) + min(m, b));
    }
}