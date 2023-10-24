//Problem name: 1850C (Way-2)
//https://codeforces.com/problemset/problem/1850/C

#include<bits/stdc++.h>
using namespace std;

void solve(){
    char ch;
    string dot,s;

    for(int i=0; i<64; i++){
        cin >> ch;
        if(ch=='.'){
            dot+=ch;
        }else{
            s+=ch;
        }
    }
    cout << s << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}