//Problem name: 1899A 
//https://codeforces.com/contest/1899/problem/0

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%3){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;   
        }
    }
    return 0;
}