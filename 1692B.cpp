//Problem name: 1692B 
//https://codeforces.com/contest/1692/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        map <int,int> a;
        int x;

        for(int i=0; i<n; i++){
            cin >> x;
            a[x]++;
        }

        int res = a.size();
        
        if((n-res)%2){
            res--;
        }

        cout << res << endl;
        
    }

    return 0;
}