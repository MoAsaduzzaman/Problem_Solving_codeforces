//Problem name: 1905A 
//https://codeforces.com/contest/1905/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int ans = min(n,m);

        if(ans==n){
            cout << m << endl;
        }else{
            cout << n << endl;
        }
    }
    return 0;
}