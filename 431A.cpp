// Problem name: 431A 
// https://codeforces.com/contest/431/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll a, ll b, ll c, ll d){
    string s;
    cin >> s;

    ll len = s.length();
    ll ans = 0;

    for(ll i=0; i<len; i++){
        if(s[i]=='1'){
            ans+=a;
        }else if(s[i]=='2'){
            ans+=b;
        }else if(s[i]=='3'){
            ans+=c;
        }else{
            ans+=d;
        }
    }
    return ans;
}

int main(){
    ll a,b,c,d;
    while(cin >> a >> b >> c >> d){
        cout << asad(a,b,c,d) << endl;
    }
    return 0;
}