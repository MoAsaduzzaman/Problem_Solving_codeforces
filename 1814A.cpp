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
 
        if((n%2!=0) && (k%2==0)){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
 
    return 0;
}