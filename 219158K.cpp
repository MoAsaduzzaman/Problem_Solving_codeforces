//Problem name: 219158K 
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include<bits/stdc++.h>
using namespace std;
int main(){

    vector <int> a(3);

    for(int i=0; i<3; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    cout << a[0] << " " << a[2] << endl;

    return 0;
}