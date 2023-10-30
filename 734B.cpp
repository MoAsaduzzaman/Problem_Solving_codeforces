//Problem name: 734B 
//https://codeforces.com/problemset/problem/734/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k2,k3,k5,k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int count_of_256 = min(k2,min(k5,k6));

    k2-=count_of_256;

    int count_of_32 = min(k2,k3);

    int ans = count_of_256*256 + count_of_32*32;

    cout << ans << endl;

    return 0;
}