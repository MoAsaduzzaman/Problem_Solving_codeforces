//Problem name: 867A 
//https://codeforces.com/problemset/problem/867/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int Seattle_to_San_Francisco = 0;
    int San_Francisco_to_Seattle = 0;

    for(int i=0; i<n; i++){
        if(s[i]=='S' && s[i+1]=='F'){
            Seattle_to_San_Francisco++;
        }else if(s[i]=='F' && s[i+1]=='S'){
            San_Francisco_to_Seattle++;
        }
    }

    if(Seattle_to_San_Francisco>San_Francisco_to_Seattle){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}