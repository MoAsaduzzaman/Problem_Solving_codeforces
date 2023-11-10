//Problem name: 411A
//https://codeforces.com/problemset/problem/411/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    int len = s.length();

    bool characters = false;
    bool upper = false;
    bool lower = false;
    bool digit = false;


    for(int i=0; i<len; i++){
        if((s[i]=='!') || (s[i]=='?') || (s[i]=='.') || (s[i]==',') || (s[i]=='_')){
            characters = true;
        }

        if(isupper(s[i])){
            upper = true;
        }

        if(islower(s[i])){
            lower = true;
        }

        if(isdigit(s[i])){
            digit = true;
        }
    }

    if(upper==true && lower==true && digit==true && len>=5){
        cout << "Correct" << endl;
    }else{
        cout << "Too weak" << endl;
    }

    return 0;
}