//Problem name: 1281A 
//https://codeforces.com/problemset/problem/1281/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int len = s.length();
        bool fili = false;
        bool jap = false;
        bool kor = false;

        
        if(s[len-1]=='o'){
            fili = true;
        }
        if(s[len-1]=='u'){
            jap = true;
        }
        if(s[len-1]=='a'){
            kor = true;
        }
        
        
        if(fili==true){
            cout << "FILIPINO" << endl;
        }else if(jap==true){
            cout << "JAPANESE" << endl;
        }else if(kor==true){
            cout << "KOREAN" << endl;
        }
    }

    return 0;
}