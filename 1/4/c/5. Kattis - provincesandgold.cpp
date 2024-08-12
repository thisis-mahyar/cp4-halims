#include <bits/stdc++.h>

using namespace std;

int main() {
    int g, s, c;
    cin >> g >> s >> c;

    int val = 3 * g + 2 * s + c;

    if (val >= 8)
        cout << "Province";
    else if (val >= 5)
        cout << "Duchy";
    else if (val >= 2)
        cout << "Estate";

    if (val >= 2)
        cout << " or ";

    if (val >= 6)
        cout << "Gold";
    else if (val >= 3)
        cout << "Silver";
    else
        cout << "Copper";
}