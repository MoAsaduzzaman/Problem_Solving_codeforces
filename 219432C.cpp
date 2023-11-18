//Problem name: 219432C 
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    
    vector <int> A(N);

    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    for(int i=0; i<N; i++){
        cin >> A[i];
        if(A[i]%2==0){
            even++;
        }
        if(A[i]%2!=0){
            odd++;
        }
        if(A[i]>0){
            pos++;
        }
        if(A[i]<0){
            neg++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}