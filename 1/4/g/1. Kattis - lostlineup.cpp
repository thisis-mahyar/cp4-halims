#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n - 1; ++i)
        cin >> a[i];

    b[0] = 1;

    for (int i = 0; i < n - 1; ++i)
        b[a[i] + 1] = i + 2;

    for (int i = 0; i < n; ++i)
        cout << b[i] << " ";
}