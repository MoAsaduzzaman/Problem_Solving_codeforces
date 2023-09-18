//Problem name: 996A 
//https://codeforces.com/problemset/problem/996/A

#include<bits/stdc++.h>
using namespace std;
int main(){

    int  n,cnt=0;
    cin >> n;
        while(n){
            if(n>=100){
                cnt++;
                n=n-100;
            }else if(n>=20){
                cnt++;
                n=n-20;
            }else if(n>=10){
                cnt++;
                n=n-10;
            }else if(n>=5){
                cnt++;;
                n=n-5;
            }else{
                cnt++;
                n=n-1;
            }
        }

    cout << cnt << endl;
    
    return 0;
}