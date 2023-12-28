// Problem name: 1283A 
// https://codeforces.com/contest/1283/problem/A

#include<bits/stdc++.h>
using namespace std;

int asad(int h, int m){
    return (24*60)-(h*60)-m;
}

int main(){
    int t;
    cin >> t;
    while(t){
        int h,m;
        cin >> h >> m;
        cout << asad(h,m) << endl;
        t--;
    }
    return 0;
}