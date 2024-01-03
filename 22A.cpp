// Problem name: 22A 
// https://codeforces.com/contest/22/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    bool found = false;
    int ans;

    for(int i=0; i<n-1; i++){
        if(a[i]!=a[i+1]){
            ans = a[i+1];
            found = true;
            break;
        }
    }

    if(found==true){
        cout << ans << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}