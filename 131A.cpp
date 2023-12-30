// Problem name: 131A 
// https://codeforces.com/contest/131/problem/A

#include<bits/stdc++.h>
using namespace std;

void asad(string s){

    char ch;
    bool decision = true;

    for(int i=1; i<s.length(); i++){
        if(islower(s[i])){
            decision = false;
        }
    }

    if(decision==true){
        for(int j = 0; j < s.length(); j++){
            if(islower(s[j])){
                ch = toupper(s[j]);
            }else{
                ch = tolower(s[j]);
            }
            cout << ch;
        }
        cout << endl;
    }else{
        cout << s << endl;
    }
}

int main(){
    string s;
    while(cin >> s){
        asad(s);
    }
    return 0;
}