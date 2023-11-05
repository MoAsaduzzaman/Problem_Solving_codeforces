//Problem name: 1849A 
//https://codeforces.com/problemset/problem/1849/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int b,c,h;
        cin >> b >> c >> h;

        int others = c+h;

        if(b>others){
            cout << others+(others+1) << endl;
        }else{
            cout << b+(b-1) << endl;
        }
    }
    return 0;
}