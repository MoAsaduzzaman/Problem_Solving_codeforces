//Problem name: 1911A (Way-2)
//https://codeforces.com/contest/1911/problem/A

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

        for(int i=1; i<n-1; i++){
            if((a[i]!=a[i-1]) && (a[i]!=(a[i+1]))){
                cout << i+1 << endl;
                ans = true;
            }
        }

        if(ans==false){
            if(a[0]==a[1]){
                cout << n << endl;
            }else{
                cout << 1 << endl;
            }
        }
    }
    return 0;
}