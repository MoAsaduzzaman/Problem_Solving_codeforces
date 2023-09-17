//Problem name: 1692A
//https://codeforces.com/problemset/problem/1692/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t,a,b,c,d;
    cin >> t;
    while(t--){
        int cnt=0;
        cin >> a >> b >> c >> d;
        if(a<b){
            cnt++;
        }
        if(a<c){
            cnt++;
        }
        if(a<d){
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}