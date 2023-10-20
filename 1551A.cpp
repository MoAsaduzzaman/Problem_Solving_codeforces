//Problem name: 1551A
//https://codeforces.com/problemset/problem/1551/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int div = n/3;
        int c1 = div;
        int c2 = div;

        if(n%3==0){
            cout << c1 << " " << c2 << endl;
        }else if(n%3==1){
            cout << (c1+1) << " " << c2 << endl;
        }else{
            cout << c1 << " " << (c2+1) << endl;
        }
    }
    return 0;
}