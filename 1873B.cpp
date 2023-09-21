//Problem name: 1873B
//https://codeforces.com/contest/1873/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        int ans = 1;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        a[0]+=1;
        for(int i=0; i<n; i++){
            ans*=a[i];
        }
        cout << ans << endl;
    }
    return 0;
}