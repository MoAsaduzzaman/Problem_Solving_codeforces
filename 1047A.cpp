//Problem name: 1047A 
//https://codeforces.com/problemset/problem/1047/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int ans = n/3;

    if(n%3==0 || n%3==1){
        cout << 1 << " " << 1 << " " << n-2 << endl;
    }else{
        cout << 1 << " " << 2 << " " << n-3 << endl;
    }

    return 0;
}