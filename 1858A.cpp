// Problem name: 1858A 
// https://codeforces.com/problemset/problem/1858/A

#include<bits/stdc++.h>
using namespace std;

string asad(int a, int b, int c){
    if(c%2==0){
        if(a>b){
            return "First";
        }else{
            return "Second";
        }
    }else{
        if(a<b){
            return "Second";
        }else{
            return "First";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t){
        int a,b,c;
        cin >> a >> b >> c;
        cout << asad(a,b,c) << endl;
        t--;
    }
    return 0;
}


