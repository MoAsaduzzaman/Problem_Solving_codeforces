//Problem name: 219774G 
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;

    vector <int> A(N);
    vector <int> B(N);

    for(int i=0; i<N; i++){
        cin >> A[i];
        B[i]=A[i];
    }

    reverse(A.begin(),A.end());

    bool ans = true;

    for(int i=0; i<N; i++){
        if(A[i]!=B[i]){
            ans = false;
            break;
        }
    }

    if(ans==true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}