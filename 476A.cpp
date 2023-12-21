// Problem name: 476A 
// https://codeforces.com/problemset/problem/467/A

#include<bits/stdc++.h>
using namespace std;

int asad(int n){

    int count = 0;

    while(n){
        int p,q;
        cin >> p >> q;

        if(p!=q && abs(p-q)>=2){
            count++;
        }

        n--;
    }

    return count;
}

int main(){
    int n;
    cin >> n;
    cout << asad(n) << endl;
    return 0;
}