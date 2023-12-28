// Problem name: 1705A 
// https://codeforces.com/contest/1705/problem/A

#include<bits/stdc++.h>
using namespace std;

string asad(int n, int x){
    vector <int> a(2*n);

    for(int i=0; i<2*n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    int ans = true;

    for(int i=0; i<n; i++){
        if(a[i+n]-a[i]<x){
            ans = false;
            break;
        }
    }

    if(ans) return "YES";
    else return "NO";
}

int main(){
    int t;
    cin >> t;
    while(t){
        int n,x;
        cin >> n >> x;
        cout << asad(n,x) << endl;
        t--;
    }
    return 0;
}