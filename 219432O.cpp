//Problem name: 219432O 
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}