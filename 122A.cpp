// Problem name: 122A  
// https://codeforces.com/contest/122/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string asad(ll n){

    if(n%4==0 || n%7==0 || n%44==0|| n%47==0 || n%74==0 ||n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0 ){
        return "YES";
    }else{
        return  "NO";
    }
}

int main(){
    ll n;
    while(cin >> n){
        cout << asad(n) << endl;
    }
    return 0;
}
