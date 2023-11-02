//Problem name: 1234A
//https://codeforces.com/problemset/problem/1234/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);
        int sum = 0;

        for(int i=0; i<n; i++){
            cin >> a[i];
            sum+=a[i];
        }

        int ans = sum/n;

        if(sum%n==0){
            cout << ans << endl;
        }else{
            cout << ans+1 << endl;
        }
    } 
    return 0;
}