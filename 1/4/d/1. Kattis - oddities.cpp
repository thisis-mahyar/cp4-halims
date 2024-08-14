#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        (x % 2 == 0) ? printf("%d is even\n", x) : printf("%d is odd\n", x);
    }
}