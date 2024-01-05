// Problem name: 318A 
// https://codeforces.com/contest/318/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n, k;
    cin >> n >> k;

    ll oddLength = (n + 1) / 2;
    ll evenLength = n / 2;

    if(k <= oddLength){
       cout << 2 * k - 1 << endl;
    }else{
        cout << 2 * (k - oddLength) << endl;
    }
    return 0;
}
