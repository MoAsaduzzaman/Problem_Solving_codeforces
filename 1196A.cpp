//Problem name: 1196A 
//https://codeforces.com/problemset/problem/1196/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,b,c;
        cin >> a >> b >> c;
        long long int ans = (a+b+c)/2;
        cout << ans << endl;
    }
    return 0;
}