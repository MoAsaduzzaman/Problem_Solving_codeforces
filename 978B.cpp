//Problem name: 978B
//https://codeforces.com/problemset/problem/978/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;

    for(int i=0; i<n; i++){
        if(i+2<=n-1){
            if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}