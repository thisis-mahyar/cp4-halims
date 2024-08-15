#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string name, study_date, birth_date;
        int courses;

        cin >> name >> study_date >> birth_date >> courses;

        int study_year = stoi(study_date.substr(0, 4));
        int birth_year = stoi(birth_date.substr(0, 4));

        if (study_year >= 2010 || birth_year >= 1991)
            cout << name << " " << "eligible\n";
        else if (courses > 40)
            cout << name << " " << "ineligible\n";
        else
            cout << name << " " << "coach petitions\n";
    }
}