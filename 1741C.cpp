//Problem name: 1741C
//https://codeforces.com/problemset/problem/1714/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int s;
        cin >> s;
        
        int ans = 0;
        int x = 1;

        for(int i=9; i>=1; i--){
            if(i>s){
                continue;
            }
            ans+=x*i;
            x*=10;
            s-=i;
        }
        cout << ans << endl;
    }
    return 0;
}