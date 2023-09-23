//Problem name: 1866A
//https://codeforces.com/contest/1866/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,A,ans=INT_MAX;
    cin >> N;
    while(N--){
        cin >> A;   
        ans = min(ans,abs(A));
    }
    cout << ans << endl;
    return 0;
}
