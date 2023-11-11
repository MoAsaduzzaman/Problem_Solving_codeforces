//Problem name: 59A 
//https://codeforces.com/contest/59/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;

    int len = s.length();

    string final_ans_up = " ";
    string final_ans_lo = " ";

    for(int i=0; i<len; i++){
        if(isupper(s[i])){
            upper++;
        }
        if(islower(s[i])){
            lower++;
        }
    }

    if(upper>lower){
        for(int i=0; i<len; i++){
            char upans = toupper(s[i]);
            final_ans_up+=upans;
        }

         cout << final_ans_up << endl;

    }else{
        for(int i=0; i<len; i++){
            char loans = tolower(s[i]);
            final_ans_lo+=loans;
        }

        cout << final_ans_lo << endl;

    }

    return 0;
}