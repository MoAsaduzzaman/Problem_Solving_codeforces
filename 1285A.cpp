//Problem name: 1285A 
//https://codeforces.com/problemset/problem/1285/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 1;
    int len = s.size();

    for(int i=0; i<len; i++){
        if(s[i]=='L' || s[i]=='R'){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}