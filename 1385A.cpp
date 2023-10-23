//Problem name: 1385A
//https://codeforces.com/problemset/problem/1385/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector <int> x(3);
        cin >> x[0] >> x[1] >> x[2];
        sort(x.begin(),x.end());

        if(x[1]==x[2]){
            cout << "YES" << endl;
            cout << x[2] << " " << x[0] << " " << x[0] << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}