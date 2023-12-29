// Problem name: 1915A 
// https://codeforces.com/contest/1915/problem/A

#include<bits/stdc++.h>
using namespace std;

int solve_by_asad(int a, int b, int c){
    if(a==b){
        return c;
    }else if(a==c){
        return b;
    }else{
        return a;
    }
}

int main(){
    int t;
    cin >> t;
    while(t){
        int a,b,c;
        cin >> a >> b >> c;
        cout << solve_by_asad(a,b,c) << endl;
        t--;
    }
    return 0;
}