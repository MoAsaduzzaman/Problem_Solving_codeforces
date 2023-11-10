//Problem name: 236A 
//https://codeforces.com/contest/236/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int len = s.length();
    sort(s.begin(),s.end());

    int count = 0;

    for(int i=0; i<len; i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }

    if(count%2==0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}