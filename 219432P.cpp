//Problem name: 219432P 
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;

    for(int i=N; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}