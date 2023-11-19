//Problem name: 219432I 
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;

    int temp = N;
    int ans = 0;

    while(N>0){
        ans=(ans*10)+(N%10);
        N/=10;
    }

    cout << ans << endl;

    if(temp==ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
   
    return 0;
}