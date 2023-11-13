//Problem name: 1061A 
//https://codeforces.com/problemset/problem/1061/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,S;
    cin >> n >> S;
    int ans = 0;

    for(int i=n; i>0; i--){
        ans+=S/i;
        S%=i;
    }

    cout << ans << endl;

    return 0;
}