//Problem name: 1374A
//https://codeforces.com/problemset/problem/1374/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,n;
        cin >> x >> y >> n;

        long int ans1 = n-n % x+y;
        long int ans2 = (n-n % x -(x-y));

       if(ans1<=n){
            cout << ans1 << endl;
       }else{
        cout << ans2 << endl;
       }
    }
    return 0;
}