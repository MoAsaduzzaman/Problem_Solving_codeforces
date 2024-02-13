// Problem name: 1931A 
// https://codeforces.com/contest/1931/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void asad(ll n){
    char a[3];

    if(n<28){
        a[0]='a';
        a[1]='a';
        a[2]='a'+n-3;
    }else if(n<53){
        a[0]='a';
        a[2]='z';
        a[1]='a'+n-28;
    }else{
        a[2]='z';
        a[1]='z';
        a[0]='a'+n-53;
    }

    for(int i=0; i<3; i++){
        cout << a[i];
    }
    cout << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll n;
        cin >> n;
        asad(n);
        t--;
    }
    return 0;
}