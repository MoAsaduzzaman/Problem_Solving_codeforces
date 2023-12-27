// Problem name: 1033B  
// https://codeforces.com/contest/1033/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int t;
    cin >> t;

    while(t){
        ll a, b;
        cin >> a >> b;

        bool isPrime = true;
        
        if (a + b <= 1) {
            isPrime = false;
        } else {
            for (ll i = 2; i * i <= a + b; i++) {
                if ((a + b) % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (abs(a - b) == 1 && isPrime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}