// Problem name: 935A 
// https://codeforces.com/contest/935/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;

    for(int i=2; i<=n; i++){
        if(n%i==0){
            cnt+=1;
        }
    }
    cout << cnt << endl;

    return 0;
}