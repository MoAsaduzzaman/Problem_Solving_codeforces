// Problem name: 1922B 
// https://codeforces.com/contest/1922/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad() {

    ll n,z=0,c=1; 
    cin >> n;

    vector<int>a; 
    a.resize(n);

    for (size_t i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n < 3) {
        return 0;
    }

    sort(a.begin(), a.end());

    if (n == 3) {
        if (a[2]==a[1]){
            return 1;
        }else{
            return 0;
        } 
    }

    for (size_t i = 2; i < n; i++) {
        if (i == 2) {
            if (a[2] == a[0])c++;
        }

        if (a[i] == a[i - 1])c++;
        else {
            z += c * (c - 1) / 2 * (i  - c);
            if (c >= 3) { 
                c -= 2;
                z += (c * c + 3 * c + 2) * c / 6; }
            c = 1;
        }
    }            
    if(c>1)z += c * (c - 1) / 2 * (n - c);
    if (c >= 3){
        c -= 2;
        z += (c * c + 3 * c + 2) * c / 6;
    }
    return z;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t; 
    cin >> t;
    while(t){
        cout << asad() << endl;
        t--;
    }
    return 0;
}