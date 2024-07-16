#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    int m = x * (n + 1);
    for (int i = 0; i < n; ++i) {
        int y;
        cin >> y;

        m -= y;
    }

    cout << m;
}