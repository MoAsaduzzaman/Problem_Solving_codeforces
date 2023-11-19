//Problem name: 219774B 
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;

    vector <int> A(N);

    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    int X;
    cin >> X;

    int ans = -1;
    bool temp = true;

    for(int i=0; i<N; i++){
        if(A[i]==X){
            ans = i;
            break;
        }
    }

    if(ans>=0){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}