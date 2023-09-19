//Problem name: 1030A
//https://codeforces.com/problemset/problem/1030/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a==1){
            cnt++;
        }
    }
    if(cnt>0){
        cout << "HARD" << endl;
    }else{
        cout << "EASY" << endl;
    }

    return 0;
}