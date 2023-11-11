//Problem name: 1754A 
//https://codeforces.com/problemset/problem/1754/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool ans = true;
        int count = 0;

        for(int i=0; i<n; i++){
            if(s[i]=='Q'){
                count++;
            }else{
                count--;
            }

            if(count<=0){
                count = 0;
            }
        }

        if(count<=0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
  
    return 0;
}
