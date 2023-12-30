// Problem name: 749A 
// https://codeforces.com/contest/749/problem/A

#include<bits/stdc++.h>
using namespace std;

void asad(int n){
    
    int ans = n/2;

    if(n%2==0){
        cout << ans << endl;
        for(int i=1; i<=ans; i++){
            cout << 2 << " ";
        }
        cout << endl;
    }else if(n%2==1){
        cout << ans << endl;
        for(int i=1; i<ans; i++){
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
}

int main(){
    int n;
    while(cin >> n){
        asad(n);
    }
    return 0;
}
