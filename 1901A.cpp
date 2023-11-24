//Problem name: 1901A 
//https://codeforces.com/contest/1901/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        int a[n+1];
        a[0]=0;

        for(int i=1; i<n+1; i++) {
            cin >> a[i];
        }

        int max1 = 0;
        bool ans = 0;

        for(int i=0; i<n; i++){
            max1=max(max1,(a[i+1]-a[i]));
            ans = 1;
        }

        if(ans){
            int max2 = ((x-a[n])*2);
            max1 = max(max1,max2);
        }
        cout << max1 << endl;
    }

    return 0;
}
