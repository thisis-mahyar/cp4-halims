#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, min_num, min_num_i = 0;
    cin >> n >> min_num;

    for (int i = 1; i < n; ++i) {
        int x;
        cin >> x;

        if (x < min_num) {
            min_num = x;
            min_num_i = i;
        }
    }

    cout << min_num_i;
}