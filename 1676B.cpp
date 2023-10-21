//Problem name: 1676B
//https://codeforces.com/problemset/problem/1676/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int sum = 0;

        vector <int> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
            sum+=a[i];
            
        }

        sort(a.begin(),a.end());

        int ans = sum-(a[0]*n);

        cout << ans << endl;

    }
    return 0;
}