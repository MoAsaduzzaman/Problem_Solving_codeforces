//Problem name: 1722A
//https://codeforces.com/problemset/problem/1722/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        string a,x="Timur";
        cin >> a;
        sort(a.begin(),a.end());
        sort(x.begin(),x.end());
        if(a==x){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }       
    }
    return 0;
}