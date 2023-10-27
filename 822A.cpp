//Problem name: 822A 
//https://codeforces.com/problemset/problem/822/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int A,B;
    cin >> A >> B;

    long long int fact1 = 1;
    long long int minn = min(A,B);

    for(int i=1; i<=minn; i++){
        fact1*=i;
    }

    cout << fact1 << endl;

    return 0;
}