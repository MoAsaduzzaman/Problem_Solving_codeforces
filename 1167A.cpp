//Problem name: 1167A 
//https://codeforces.com/problemset/problem/1167/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool count = false;

        for(int i=0; i<n; i++){
            if(s[i]=='8' && n-i>=11){
                count = true;
                break;
            }
        }

        if(count==true && n>=11){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        } 
    }

    return 0;
}