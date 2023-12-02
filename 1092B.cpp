//Problem name: 1911C 
//https://codeforces.com/contest/1911/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    int ans = 0;

    for(int i=0; i<n; i+=2){
        if(a[i]!=a[i+1]){
            ans+=(a[i+1]-a[i]);
        }
    }

    cout << ans << endl;

    return 0;
}