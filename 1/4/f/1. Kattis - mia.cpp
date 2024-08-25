#include <bits/stdc++.h>

using namespace std;

int main() {
    int s0, s1, s2, s3;

    while (true) {
        cin >> s0 >> s1 >> s2 >> s3;

        if (s0 == 0 && s1 == 0 && s2 == 0 && s3 == 0)
            break;

        int point1, point2;

        if (s0 == 1 && s1 == 2 || s0 == 2 && s1 == 1)
            point1 = INT32_MAX; // highest
        else if (s0 == s1)
            point1 = s0 * 100; // one step higher than normal values
        else
            point1 = max(s0, s1) * 10 + min(s0, s1);

        if (s2 == 1 && s3 == 2 || s2 == 2 && s3 == 1)
            point2 = INT32_MAX; // highest
        else if (s2 == s3)
            point2 = s2 * 100; // one step higher than normal values
        else
            point2 = max(s2, s3) * 10 + min(s2, s3);

        point1 == point2 ? cout << "Tie.\n" : point1 < point2 ? cout << "Player 2 wins.\n" : cout << "Player 1 wins.\n";
    }
}