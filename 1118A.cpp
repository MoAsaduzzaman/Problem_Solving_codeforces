//Problem name: 1118A 
//https://codeforces.com/problemset/problem/1118/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        long long int n,ans;
        int a,b;
        cin >> n >> a >> b;

        if((2*a)<b){
            ans = a*n;
        }else{
            ans = b*(n/2);
            if(n%2==1){
                ans = ans+a;
            }
        }

        cout << ans << endl;
    }
    return 0;
}