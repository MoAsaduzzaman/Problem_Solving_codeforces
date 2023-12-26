// Problem name: 1917B 
// https://codeforces.com/contest/1917/problem/B

#include<bits/stdc++.h>
using namespace std;

int asad(int n, string s){

    set<char> cnt;
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans += cnt.size();
        cnt.insert(s[i]);
    } 
    
    ans += cnt.size();
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << asad(n,s) << endl;
        t--;
    }
    return 0;
}