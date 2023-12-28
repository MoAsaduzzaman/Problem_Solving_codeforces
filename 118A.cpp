// Problem name: 118A 
// https://codeforces.com/contest/118/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

string solve_by_asad(string s){

    ll len = s.length();
    string ans = "";

    for(ll i=0; i<len; i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' || s[i]=='y' || s[i]=='Y'){
            continue;
        }else{
            char x = tolower(s[i]);
            ans+='.';
            ans+=x;
        }
    }

    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << solve_by_asad(s) << endl;
    return 0;
}
