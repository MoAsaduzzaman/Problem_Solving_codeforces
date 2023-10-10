//Problem name: 41A
//https://codeforces.com/problemset/problem/41/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string t,s;
    cin >> t >> s;

    reverse(t.begin(),t.end());

    if(s==t){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
