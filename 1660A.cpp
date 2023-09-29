//Problem name: 1660A
//https://codeforces.com/problemset/problem/1660/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin >> t;
    while(t--){
        int x=1;
        cin >> a >> b;
        if(a!=0){
            cout << 2*b+a+1 << endl;
        }else{
            cout << x << endl;
        }
    }
    return 0;
}