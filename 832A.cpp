//Problem name: 832A 
//https://codeforces.com/problemset/problem/832/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin >> n >> k;

    if((n/k)%2==0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }

    return 0;
}