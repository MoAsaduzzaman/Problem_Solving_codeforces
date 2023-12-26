// Problem name: 1903A 	
// https://codeforces.com/contest/1903/problem/A

#include<bits/stdc++.h>
using namespace std;

string asad(int n, int k){
    vector <int> a(n);

    for(int i=0; i<n; ++i){
        cin >> a[i];
    }

    if(k==1 && !is_sorted(a.begin(), a.end())){
        return "NO";
    }else{
        return "YES";
    }
}

int main(){
    int t;
    cin >> t;
    while(t){
        int n, k;
        cin >> n >> k;
        cout << asad(n,k) << endl;
        t--;
    }
    return 0;
}