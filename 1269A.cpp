//Problem name: 1269A 
//https://codeforces.com/problemset/problem/1269/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int ans1 = n*3;
    int ans2 = n*2;

    if(n==1){
        cout << 9 << " " << 8 << endl;
    }else{
        cout << ans1 << " " << ans2 << endl;
    }

    return 0;
}