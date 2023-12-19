// Problem name: 1914B  
//https://codeforces.com/contest/1914/problem/B

#include<bits/stdc++.h>
using namespace std;

void asad(int t){
    while(t){
        int n,k;
        cin >> n >> k;

        for(int i=n-k; i<=n; i++){
            cout << i << " ";
        }

        for(int i=n-k-1; i>=1; i--){
            cout << i << " ";
        }
        t--;
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    asad(t);
    return 0;
}