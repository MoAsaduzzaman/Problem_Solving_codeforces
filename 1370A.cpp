// Problem name: 1370A 
// https://codeforces.com/problemset/problem/1370/A

#include<bits/stdc++.h>
using namespace std;

int asad(int n){
    return n/2;
}

int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        cout << asad(n) << endl;
        t--;
    }
}