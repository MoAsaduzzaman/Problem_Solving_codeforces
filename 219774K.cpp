//Problem name: 219774K 
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    string A;
    cin >> A;
    
    int sum = 0;

    for(int i=0; i<N; i++){
        sum+=A[i];
    }

    cout << sum-(N*48) << endl;

    return 0;
}