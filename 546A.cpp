//Problem name: 546A
//https://codeforces.com/problemset/problem/546/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int k,n,w,ans=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++){
        ans = ans +(i*k);
    }

    if(ans>=n){
        cout << ans-n << endl;
    }else{
        cout << "0" << endl;
    }

    return 0;
}