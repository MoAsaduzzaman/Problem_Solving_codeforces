//Problem name: 1822C 
//https://codeforces.com/problemset/problem/1822/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        long long int ans = pow(n,2)+(n*2)+2;
        
        cout << ans << endl;
    }
    return 0;
}