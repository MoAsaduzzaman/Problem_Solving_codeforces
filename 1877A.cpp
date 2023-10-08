//Problem name: 1877A
//https://codeforces.com/contest/1877/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        int sumofvec=0;
        int x=-1;
        cin >> n;
        vector <int> a(n-1);

        for(int i=0; i<n-1; i++){
            cin >> a[i];
            sumofvec+=a[i];
        }
        cout << x*sumofvec << endl;
    }
    return 0;
}