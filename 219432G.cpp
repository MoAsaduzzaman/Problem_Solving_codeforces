//Problem name: 219432G 
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;

        long long int ans = 1;

        for(long long int i=N; i>0; i--){
            ans*=i;
        }

        cout << ans << endl;
    }

    return 0;
}