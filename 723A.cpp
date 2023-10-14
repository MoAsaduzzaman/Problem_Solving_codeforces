//Problem name: 723A 
//https://codeforces.com/problemset/problem/723/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> x(3);

    for(int i=0; i<3; i++){
        cin >> x[i];
    }

    sort(x.begin(),x.end());

    int ans = x[2]-x[0];

    cout << ans << endl;

    return 0;
}