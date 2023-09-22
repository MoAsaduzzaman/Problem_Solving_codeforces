//Problem name: 1850A
//https://codeforces.com/contest/1850/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if((a+b)>=10 || (a+c)>=10 || (b+c)>=10){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}