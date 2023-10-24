//Problem name: 1607A
//https://codeforces.com/problemset/problem/1607/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        int ans = 0;

        cin >> s1 >> s2;

        map <char,int> x;

        for(int i=0; i<26; i++){
            x[s1[i]]=i;
        }

        int len = s2.length();
        
        for(int i=1; i<len; i++){
            ans+=abs(x[s2[i]]-x[s2[i-1]]);
        }

        cout << ans << endl;
    }
    return 0;
}