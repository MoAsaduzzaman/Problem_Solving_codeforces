//Problem name: 1743A 
//https://codeforces.com/problemset/problem/1743/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        cout << (10-n)*(9-n)*3 << endl;
    }
    return 0;
}