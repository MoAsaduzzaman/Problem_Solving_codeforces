//Problem name: 219856B 
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    string ans = "";

    for(int i=0; i<s.length(); i++){
        if(s[i]!='\\'){
           ans+=s[i];
        }else{
            break;
        }
    }

    cout << ans << endl;

    return 0;
}