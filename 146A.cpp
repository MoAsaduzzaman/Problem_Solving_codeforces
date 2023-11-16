//Problem name: 146A 
//https://codeforces.com/problemset/problem/146/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    int first_half_sum = 0;
    int last_half_sum = 0;

    for(int i=0; i<n; i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }

    for(int i=0; i<n/2; i++){
        first_half_sum+=s[i];
    }

    for(int i=n/2; i<n; i++){
        last_half_sum+=s[i];
    }

    if((count==n) && (first_half_sum==last_half_sum)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}