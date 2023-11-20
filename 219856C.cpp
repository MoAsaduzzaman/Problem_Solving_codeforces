//Problem name: 219856C 
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    string X,Y;
    cin >> X >> Y;

    if(lexicographical_compare(X.begin(),X.end(),Y.begin(),Y.end())){
        cout << X << endl;
    }else{
        cout << Y << endl;
    }

    return 0;
}