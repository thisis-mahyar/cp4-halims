#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    if (r == 0 && l == 0)
        cout << "Not a moose";
    else {
        (l == r) ? cout << "Even " : cout << "Odd ";
        cout << max(l, r) * 2;
    }
}