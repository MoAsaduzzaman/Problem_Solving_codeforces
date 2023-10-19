//Problem name: 32B 
//https://codeforces.com/problemset/problem/32/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    cin >> x;

    int len = x.length();

    for(int i=0; i<len; i++){
        if(x[i]=='.'){
            y+='0';
        }else if(x[i]=='-' && x[i+1]=='.'){
            y+='1';
            i++;
        }else if(x[i]=='-' && x[i+1]=='-'){
            y+='2';
            i++;
        }
    }
    cout << y << endl;
    return 0;
}