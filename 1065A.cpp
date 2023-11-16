//Problem name: 1065A 
//https://codeforces.com/problemset/problem/1065/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int s,a,b,c;
        cin >> s >> a >> b >> c;
        long long int ans = (s/c)+(((s/c)/a)*b);
        cout << ans << endl;
    }
    return 0;
}