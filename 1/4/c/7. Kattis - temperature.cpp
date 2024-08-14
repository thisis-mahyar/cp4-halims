#include <bits/stdc++.h>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    if (y == 1 && x != 0)
        cout << "IMPOSSIBLE\n";
    else if (y == 1 && x == 0)
        cout << "ALL GOOD\n";
    else {
        cout << fixed;
        cout.precision(9);
        cout << x / (1 - y) << "\n";
    }
}