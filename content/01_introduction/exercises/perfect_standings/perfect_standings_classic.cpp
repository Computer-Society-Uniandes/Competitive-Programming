/**
    @author: Daniel Diaz
*/
#include <bits/stdc++.h>
using namespace std;


void generateCombinations(int index, int currentSum, string currentCombination, vector<int>& values, vector<string>& letters, vector<pair<int, string>>& combinations) {
    if (index == 5) {
        if (!currentCombination.empty()) { 
            combinations.push_back({-currentSum, currentCombination});
        }
        return;
    }
    generateCombinations(index + 1, currentSum + values[index], currentCombination + letters[index], values, letters, combinations);
    generateCombinations(index + 1, currentSum, currentCombination, values, letters, combinations);
}

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    vector<int> values = {a, b, c, d, e};
    vector<string> letters = {"A", "B", "C", "D", "E"};
    vector<pair<int, string>> combinations;

    generateCombinations(0, 0, "", values, letters, combinations);

    sort(combinations.begin(), combinations.end());

    for (const auto& comb : combinations) {
        printf("%s\n", comb.second.c_str());
    }

    return 0;
}