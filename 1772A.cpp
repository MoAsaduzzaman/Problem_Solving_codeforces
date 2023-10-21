//Problem name: 1772A
//https://codeforces.com/problemset/problem/1772/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        sort(a.begin(),a.end());
        int ans = a[1]+a[2]-96;
        cout << ans << endl;
    }
    return 0;
}