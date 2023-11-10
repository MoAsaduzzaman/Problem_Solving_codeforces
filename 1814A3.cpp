//Problem name: 1814A
//https://codeforces.com/problemset/problem/1814/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        long long int n,k;
        cin >> n >> k;

        if(k%2==0 && n%2==1){
            cout << "NO" << endl;
        }else if(n%k==0 || (n/2)%k==0 || (n-2*(n/(2*k)*k)%k==0)){
            cout << "YES" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}