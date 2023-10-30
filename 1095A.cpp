//Problem name: 1095A
//https://codeforces.com/problemset/problem/1095/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;

    ans+=s[0];
    int k = 1;

    for(int i=1; i<n; i++){
        ans+=s[i];
        i+=k;
        k++;    
    }

    cout << ans << endl;

    return 0;
}