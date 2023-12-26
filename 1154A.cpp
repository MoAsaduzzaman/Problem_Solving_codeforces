// Problem name: 1154A 
// https://codeforces.com/problemset/problem/1154/A

#include<bits/stdc++.h>
using namespace std;

void asad(){
    vector <int> a(4);

    for(int i=0; i<4; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    for(int i=0; i<3; i++){
        cout << a[3]-a[i] << " ";
    }

    cout << endl;
}

int main(){
    asad();
    return 0;
}