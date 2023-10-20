//Problem name: 1760A
//https://codeforces.com/problemset/problem/1760/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector <int> a(3);

        for(int i=0; i<3; i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        cout << a[1] << endl;
    }
    return 0;
}