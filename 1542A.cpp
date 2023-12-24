// Problem name: 1542A 
// https://codeforces.com/problemset/problem/1542/A

#include<bits/stdc++.h>
using namespace std;

string asad(int n){
    vector <int> a(2*n);

    int count = 0;

    for(int i=0; i<2*n; i++){
        cin >> a[i];
        count+=a[i]%2;
    }

    if(count==n){
        return "Yes";
    }else{
        return "No";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << asad(n) << endl;
    }
    return 0;
}
