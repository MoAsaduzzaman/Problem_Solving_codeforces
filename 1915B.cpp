// Problem name: 1915B 
// https://codeforces.com/contest/1915/problem/B

#include<bits/stdc++.h>
using namespace std;

char solve_by_asad(vector<string>& square) {
    set<char> letters = {'A', 'B', 'C'};

    for (const auto& row : square) {
        set<char> missing_letter(letters.begin(), letters.end());
        for (char ch : row) {
            missing_letter.erase(ch);
        }
        if (missing_letter.size() == 1) {
            return *missing_letter.begin();
        }
    }

    for (int col = 0; col < 3; ++col) {
        set<char> missing_letter(letters.begin(), letters.end());

        for (int row = 0; row < 3; ++row) {
            missing_letter.erase(square[row][col]);
        }
        if (missing_letter.size() == 1) {
            return *missing_letter.begin();
        }
    }

    set<char> missing_letter1(letters.begin(), letters.end());

    for (int i = 0; i < 3; ++i) {
        missing_letter1.erase(square[i][i]);
    }

    if (missing_letter1.size() == 1) {
        return *missing_letter1.begin();
    }

    set<char> missing_letter2(letters.begin(), letters.end());

    for (int i = 0; i < 3; ++i) {
        missing_letter2.erase(square[i][2 - i]);
    }

    if (missing_letter2.size() == 1) {
        return *missing_letter2.begin();
    }

    return ' ';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> square(3);
        for (int i = 0; i < 3; ++i) {
            cin >> square[i];
        }

        char result = solve_by_asad(square);
        cout << result << endl;
    }

    return 0;
}
