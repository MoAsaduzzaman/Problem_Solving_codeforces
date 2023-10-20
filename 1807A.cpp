//Problem name: 1807A
//https://codeforces.com/problemset/problem/1807/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int plus = a+b;
        int minus = a-b;

        if(plus==c){
            cout << "+" << endl;
        }else if(minus==c){
            cout << "-" << endl;
        }
    }
    return 0;
}