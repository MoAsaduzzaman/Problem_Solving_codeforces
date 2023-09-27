//Problem name: 1878A
//https://codeforces.com/problemset/problem/1878/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        int cnt=0;
        cin >> n >> k;
        vector <int> a(n); 

        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==k) cnt++;
        }

        if(cnt>0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}