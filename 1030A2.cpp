//Problem name: 1030A (Way-2)
//https://codeforces.com/problemset/problem/1030/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,cnt=0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a==1){
            cnt+=1;
        }
    }
    if(cnt==0){
        cout << "EASY" << endl;
    }else{
        cout << "HARD" << endl;
    }

    return 0;
}