//Problem name: 339A 
//https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int n = s.size();

    sort(s.begin(),s.end());

    for(int i=0; i<n-1; i++){
        if(isdigit(s[i])){
            cout << s[i] << "+";
        }
    }
    cout << s[n-1];

    return 0;
}