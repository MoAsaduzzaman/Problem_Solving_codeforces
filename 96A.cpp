// Problem name: 96A 
// https://codeforces.com/contest/96/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string asad(string s){

    ll len = s.length();
    bool ans = false;

    for(ll i=0; i<len; i++){
        if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0'&& s[i+6]=='0'){
            ans = true;
        }
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1'&& s[i+6]=='1'){
            ans = true;
        }
    }

    if(ans==true) return "YES";
    else return "NO";
}

int main(){
    string s;
    cin >> s;
    cout << asad(s) << endl;
    return 0;
}