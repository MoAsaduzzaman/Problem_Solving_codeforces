// Problem name: 1294A 
// https://codeforces.com/problemset/problem/1294/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b,c,n;
        cin >> a >> b >> c >> n;
        ll sum = 0; 
        sum+=a+b+c+n;
        if(sum%3!=0 || sum/3<a || sum/3<b || sum/3<c){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}