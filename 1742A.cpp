//Problem name: 1742A 
//https://codeforces.com/contest/1742/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int ans1 = a+b;
        int ans2 = a+c;
        int ans3 = b+c;

        if(ans1==c || ans2==b || ans3==a){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}