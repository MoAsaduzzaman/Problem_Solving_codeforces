//Problem name: 1146A 
//https://codeforces.com/problemset/problem/1146/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.length();

    int count_a = 0;
    int count_others = 0;
    int newcount = 0;

    for(int i=0; i<len; i++){
        if(s[i]=='a'){
            count_a++;
        }else{
            count_others++;
        }
    }

    if(count_a>count_others){
        cout << len << endl;
    }else{
        for(int i=1; i<=50; i++){
            if(count_others>=count_a){
                count_others--;
                newcount++;
            }
        }
        cout << len-newcount << endl;
    }

    return 0;
}