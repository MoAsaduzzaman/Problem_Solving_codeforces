//Problem name: 124A 
//https://codeforces.com/contest/124/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin >> n >> a >> b;

    int ans;
    int con = n-a-1;

    if(con>b){
        ans = b+1;
    }else{
        ans = con+1;
    }

    cout << abs(ans) << endl;
    
    return 0;
}
