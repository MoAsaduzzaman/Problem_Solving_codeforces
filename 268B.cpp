// Problem name: 268B  
// https://codeforces.com/contest/268/problem/B

#include <bits/stdc++.h>
using namespace std;

int asad(int n){
    int ans = 0;
    int temp;

    for(int i=0; i<n; i++){
        temp=(i+1)*(n-i)-i;
        ans+=temp;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << asad(n) << endl;
    return 0;
}