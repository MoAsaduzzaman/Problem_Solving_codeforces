//Problem name: 1593A
//https://codeforces.com/problemset/problem/1593/A

#include<bits/stdc++.h>
using namespace std;

int solve(int x, int y, int z){
    return max(0,max(y,z)+1-x);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        cout << solve(a,b,c) << " " << solve(b,a,c) << " " << solve(c,a,b) << endl;
    }
    return 0;
}

