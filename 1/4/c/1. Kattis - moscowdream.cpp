#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    bool flag1 = (a + b + c) >= n;
    bool flag2 = a > 0 && b > 0 && c > 0;
    bool flag3 = n >= 3;

    (flag1 && flag2 && flag3) ? cout << "YES" : cout << "NO";
}