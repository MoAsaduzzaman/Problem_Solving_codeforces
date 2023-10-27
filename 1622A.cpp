//Problem name: 1622A
//https://codeforces.com/problemset/problem/1622/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l1,l2,l3;
        cin >> l1 >> l2 >> l3;

        bool ans = false;

        if(l1==l2+l3 || l2==l1+l3 || l3==l1+l2){
            ans = true;
        }else if(l1%2==0 && l2==l3 || l2%2==0 && l1==l3 || l3%2==0 && l1==l2){
            ans = true;
        }

        if(ans){
            cout << "YES" << endl;
        }else{
            cout << "NO"  << endl;
        }
    }
    
    return 0;
}