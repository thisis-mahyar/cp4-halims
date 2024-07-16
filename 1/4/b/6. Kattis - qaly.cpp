#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    double a, b, result = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        result += a * b;
    }

    cout << result << "\n";
}