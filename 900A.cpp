// Problem name: 900A 
// https://codeforces.com/contest/900/problem/A

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int r = 0, l = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x > 0) {
            r++;
        } else {
            l++;
        }
    }
    if (min(r, l) <= 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

