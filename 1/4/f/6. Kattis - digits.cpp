#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;

    while (true) {
        cin >> x;
        if (x == "END")
            break;

        if (x.length() > 9)
            cout << "4\n";
        else if (x.length() > 1)
            cout << "3\n";
        else if (x != "1")
            cout << "2\n";
        else
            cout << "1\n";
    }
}