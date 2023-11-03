//Problem name: 1792A 
//https://codeforces.com/problemset/problem/1792/A

#include<bits/stdc++.h>
using namespace std;
int main() {
    int T,n;
    cin >> T;
    while (T --) {
        cin >> n;
        int a, b;
        a = b = 0;
        for (int i = 0; i<n; i++) {
            int x; cin >> x;
            if (x==1) a++;
            else b++;
        }
        if (a%2==0) cout << (a/2)+b << endl; 
        else cout << (a/2)+b+1 << endl; 
    }
    return 0;
}

