// Problem name: 1923A 
// https://codeforces.com/contest/1923/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long;

int min_operations(vector<int>& cells) {
    int n = cells.size();
    int count = 0;
    int last_chip_position = -1;

    for (int i = 0; i < n; ++i) {
        if (cells[i] == 1) {
            if (last_chip_position != -1) {
                count += i - last_chip_position - 1;
            }
            last_chip_position = i;
        }
    }

    return count;
}


int main(){
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> cells(n);
        for (int i = 0; i < n; ++i) {
            cin >> cells[i];
        }

        int result = min_operations(cells);
        cout << result << endl;
    }

    return 0;
}