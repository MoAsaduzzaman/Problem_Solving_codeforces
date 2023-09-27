//Problem name: 1878C
//https://codeforces.com/problemset/problem/1878/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; 
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        
        if (k*(k+1)/2<=x && x<=k*(2*n-k+1)/2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
