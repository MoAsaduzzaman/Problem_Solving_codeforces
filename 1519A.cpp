//Problem name: 1519A 
//https://codeforces.com/problemset/problem/1519/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int r,b,d;
        cin >> r >> b >> d;

        int dif = abs(r-b);
        int minimum = min(r,b);

        int ans = (dif+minimum-1)/minimum;

        if(ans<=d){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}