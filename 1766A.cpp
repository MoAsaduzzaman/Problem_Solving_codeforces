//Problem name: 1766A 
//https://codeforces.com/problemset/problem/1766/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n<10){
            cout << n << endl;
        }else{
            int ans = 9;
            int say = 10;

            while(n/say){
                if(n/(say*10)==0)
                    ans+=n/say;
                else
                    ans+=9;
                    say*=10;
            }

            cout << ans << endl;
        }
    }
    
    return 0;
}