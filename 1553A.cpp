// Problem name: 1553A 
// https://codeforces.com/problemset/problem/1553/A

#include<bits/stdc++.h>
using namespace std;

int asad(int n){
    return (n+1)/10;
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
    return 0;
}
