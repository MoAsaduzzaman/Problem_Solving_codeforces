//Problem name: 1896A
//https://codeforces.com/contest/1896/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> permutation(n);

        for(int i=0; i<n; i++) {
            cin >> permutation[i];
        }

        if(permutation[0]!=1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        } 
    }

    return 0;
}



