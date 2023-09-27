//Problem name: 1742B
//https://codeforces.com/problemset/problem/1742/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        int cnt = 0;
        bool x = 0;
        cin >> n;
        vector <int> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        for(int i=0; i<n-1; i++){
            if(a[i] == a[i+1])
                x = 1; 
        }

        if(x){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
        return 0;
}