//Problem name: 1814A
//https://codeforces.com/problemset/problem/1814/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        if(n%2==0){
            cout << "YES" << endl;
        }else if(n%k==0){
            cout << "YES" << endl;
        }else if((n-k)%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}