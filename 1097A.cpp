// Problem name: 1097A 
// https://codeforces.com/contest/1097/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

string asad(){
    string s;
    cin >> s;

    char a = s[0];
    char b = s[1];
    char x,y;
    bool ans = false;

    for(ll i=0; i<5; i++){
        string p;
        cin >> p;
        if(p[0]==a || p[1]==b) ans = true;
    }

    if(ans==true) return "YES";
    else return "NO";
}

int main(){
    cout << asad() << endl;
    return 0;
}