/**
    @author: Daniel Diaz
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t, s, curr, pos, res;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld", &s);
        res = 0;
        curr = 9;
        pos = 1;
        while (s > 0) {
            if (s >= curr) {
                res += curr * pos;
                s -= curr;
            }
            else {
                res += s * pos;
                s = 0;
            }
            curr--;
            pos *= 10;
        }
        printf("%lld\n", res);
    }
}