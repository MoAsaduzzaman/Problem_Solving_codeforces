// Problem name: 486A 
// https://codeforces.com/contest/486/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll n){
  if(n%2==0){
    return n/2;
  }else{
    return -(n+1)/2;
  }
}

int main(){
    ll n;
    cin >> n;
    cout << asad(n) << endl;
    return 0;
}