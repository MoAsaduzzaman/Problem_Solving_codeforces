//Problem name: 1703A
//https://codeforces.com/problemset/problem/1703/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;

        if(x=="YES" || x=="yes" || x=="Yes" || x=="yEs" || x=="yeS" || x=="YeS" || x=="YEs" || x=="yES"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}