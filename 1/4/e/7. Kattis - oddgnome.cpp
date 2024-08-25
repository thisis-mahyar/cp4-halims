#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int g, pre, index;
        cin >> g >> pre;

        for (int i = 1; i < g; ++i) {
            int current;
            cin >> current;

            if (current - pre != 1)
                index = i;

            pre = current;
        }

        cout << index << "\n";
    }
}