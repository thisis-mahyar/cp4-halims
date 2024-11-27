#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;

    double max_diff = 0;
    double max_element = p * (sin(a * 1 + b) + cos(c * 1 + d) + 2);

    for (int k = 2; k <= n; k++) {
        double next_element = p * (sin(a * k + b) + cos(c * k + d) + 2);
        if (max_element - next_element > max_diff) max_diff = max_element - next_element;
        if (next_element > max_element) max_element = next_element;
    }

    printf("%.7f\n", max_diff);
}