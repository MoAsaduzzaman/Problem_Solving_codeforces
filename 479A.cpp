// Problem name: 479A 
// https://codeforces.com/contest/479/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve_by_asad(ll a, ll b, ll c){
    ll ans1 = a+b*c;
    ll ans2 = a*(b+c);
    ll ans3 = a*b*c;
    ll ans4 = (a+b)*c;
    ll ans5 = a+b+c;

    ll temp =  max(max(ans1,ans2),max(ans3,ans4));
    return max(temp,ans5);
}

int main(){
    ll a,b,c;
    while(cin >> a >> b >> c){
        cout << solve_by_asad(a,b,c) << endl;
    }
    return 0;
}
