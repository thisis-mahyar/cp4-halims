#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    for (int i = 1; cin >> n; ++i) {
        int x, min_num = INT32_MAX, max_num = INT32_MIN;

        for (int j = 0; j < n; ++j) {
            cin >> x;

            min_num = min(min_num, x);
            max_num = max(max_num, x);
        }

        cout << "Case " << i << ": " << min_num << " " << max_num << " " << max_num - min_num << "\n";
    }
}