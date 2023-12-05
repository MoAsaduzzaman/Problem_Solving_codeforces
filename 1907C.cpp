//Problem name: 1907C 
//https://codeforces.com/contest/1907/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int a[26]={0};

        for(auto x:s){
            a[x-'a']++;
        }

        int maxc = 0;

        for(int i=0; i<26; i++){
            maxc = max(maxc,a[i]);
        }

        if(maxc>n/2){
            cout << 2*maxc-n << endl;
        }else if(n%2==1){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }        
    }
    
    return 0;
}


