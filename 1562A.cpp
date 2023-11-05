//Problem name: 1562A
//https://codeforces.com/problemset/problem/1562/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int long long l,r,ans;
        cin >> l >> r;

        if((r/2)>=l){
            cout << (r-1)/2 << endl;
        }else{
            cout << r-l << endl;
        }
    }
    return 0;
}