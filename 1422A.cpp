//Problem name: 1422A 
//https://codeforces.com/problemset/problem/1422/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;        
        cout << max(a,max(b,c))+1 << endl;
    }
    return 0;
}