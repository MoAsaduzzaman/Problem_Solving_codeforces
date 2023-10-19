//Problem name: 707A
//https://codeforces.com/problemset/problem/707/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,cnt=0;
    cin >> t >> n;

    int ans = t*n;

    vector <char> x(ans);

    for(int i=0; i<ans; i++){
        cin >> x[i];
        if(x[i]=='W' || x[i]=='B' || x[i]=='G'){
            cnt++;
        }
    }

    if(cnt==ans){
        cout << "#Black&White" << endl;
    }else{
        cout << "#Color" << endl;
    }

    return 0;
}