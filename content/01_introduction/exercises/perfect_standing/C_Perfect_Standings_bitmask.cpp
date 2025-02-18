/**
    @author: Daniel Diaz
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e, curr, idx, copyI;
    vector<pair<int, string>> v;
    string posibility;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    vector<int> values = {a,b,c,d,e};
    vector<string> valuesLetters = {"A", "B", "C", "D", "E"};
    for (int i = 1; i < 32; ++i) {
        posibility = "";
        curr = 0;
        copyI = i;
        idx = 0;
        while (copyI > 0) {
            if (copyI % 2 == 1) {
                posibility += valuesLetters[idx];
                curr += values[idx];
            }
            copyI /= 2;
            idx++;
        }
        v.push_back({-curr, posibility});

    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 31; ++i) {
        printf("%s\n", v[i].second.c_str());
    }
}