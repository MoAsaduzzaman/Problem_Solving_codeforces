//Problem name: 1206A
//https://codeforces.com/problemset/problem/1206/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;

    vector <int> b(m);

    for(int j=0; j<m; j++){
        cin >> b[j];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    cout << a[n-1] << " " << b[m-1] << endl;

    return 0;
}