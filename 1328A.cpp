//Problem name: 1328A 
//https://codeforces.com/problemset/problem/1328/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,b,count=0,i;
        cin >> a >> b;

        if(a%b==0){
            cout << 0 << endl;
        }else{
            cout << (((a/b)+1)*b)-a << endl;
        }

    }
    return 0;
}