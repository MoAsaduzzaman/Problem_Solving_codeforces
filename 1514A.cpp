//Problem name: 1514A 
//https://codeforces.com/problemset/problem/1514/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);

        bool ans = false;

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<n; i++){
            int res = floor(sqrt(a[i]));
            if(res*res!=a[i]){
                ans = true;
                break;
            }
        }

        if(ans){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}