//Problem name: 1095C 
//https://codeforces.com/problemset/problem/1095/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <long long> v;
    long long n, k;
    while(cin >> n >> k){

        v.assign(k, 1);
        long long sum = k;

        for(long long i=k-1; i>=0; i--){
            while(sum+v[i]<=n){
                sum+=v[i];
                v[i]*=2;
            }
        }

        if(sum!=n){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            for(long long i=0; i<k; i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

