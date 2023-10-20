//Problem name: 1619A
//https://codeforces.com/problemset/problem/1619/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;

        int cnt=0;

        int len = a.length();

        if(len%2==0){
            int div = len/2;
            for(int i=0; i<div; i++){
                if(a[i]!=a[div+i]){
                    cnt++;
                }
            }
            if(cnt==0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}