//Problem name: 1633A
//https://codeforces.com/problemset/problem/1633/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n%7==0){
            cout << n << endl;
            continue;
        }else{
            n=10*(n/10);
            if(n%7==0){
                cout << n << endl;
                continue;
            }else{
                n++;
                while(n%10!=0){
                    if(n%7==0){
                        break;
                    }
                    n++;
                }
            }
            cout << n << endl;
        }   
    }
    return 0;
}      