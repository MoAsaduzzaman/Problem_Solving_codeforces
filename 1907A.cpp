//Problem name: 1907A
//https://codeforces.com/contest/1907/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        char x = s[0];
        int y = s[1]-'0';

        for(int i = 1 ; i<= 8;i++){
            if(i!=y)
            cout << x << i << endl;
        }
        
        for(char a='a'; a<='h';a++){
            if(a!=x){
            cout << a << y <<endl;
            }
        }
    }
  
    return 0;
}