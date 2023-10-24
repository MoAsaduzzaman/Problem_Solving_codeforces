//Problem name: 1850C
//https://codeforces.com/problemset/problem/1850/C

#include<bits/stdc++.h>
using namespace std;

void solve(){
    char ch;
    string s;

    for(int i=0; i<64; i++){
        cin >> ch;
        if(ch=='a' || ch=='b' || ch=='c' || ch=='d' || ch=='e'){
            s+=ch;
        }
        if(ch=='f' || ch=='g' || ch=='h' || ch=='i' || ch=='j'){
            s+=ch;
        }
        if(ch=='k' || ch=='l' || ch=='m' || ch=='n' || ch=='o'){
            s+=ch;
        }
        if(ch=='p' || ch=='q' || ch=='r' || ch=='s' || ch=='t'){
            s+=ch;
        }
        if(ch=='u' || ch=='v' || ch=='w' || ch=='x' || ch=='y' || ch=='z'){
            s+=ch;
        }   
    }
    cout << s << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}