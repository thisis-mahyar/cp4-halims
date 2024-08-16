#include <bits/stdc++.h>

using namespace std;

vector<string> splitString(const string &str, char delimiter) {
    istringstream stream(str);
    vector<string> tokens;
    string token;

    while (getline(stream, token, delimiter))
        tokens.push_back(token);

    return tokens;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s == "P=NP")
            cout << "skipped\n";
        else {
            int a = stoi(splitString(s, '+')[0]);
            int b = stoi(splitString(s, '+')[1]);

            cout << a + b << "\n";
        }
    }
}