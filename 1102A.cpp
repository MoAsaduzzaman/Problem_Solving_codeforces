//Problem name: 1102A 
//https://codeforces.com/problemset/problem/1102/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    n%=4;

    if(n==0 || n==3){
        cout << 0 << endl;
    }else{
        cout << 1 << endl;
    }

    return 0;
}