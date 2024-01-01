// Problem name: 1644A 
// https://codeforces.com/contest/1644/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string asad(string s){

    ll len = s.length();

    ll rK,rD,gK,gD,bK,bD;

    for(ll i=0; i<len; i++){
        if(s[i]=='r') rK=i;
        if(s[i]=='R') rD=i;

        if(s[i]=='g') gK=i;
        if(s[i]=='G') gD=i;

        if(s[i]=='b') bK=i;
        if(s[i]=='B') bD=i;
    }

    if(rK<rD && gK<gD && bK<bD){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << asad(s) << endl;
    }
    return 0;
}