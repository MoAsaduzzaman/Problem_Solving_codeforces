//Problem name: 1411A 
//https://codeforces.com/problemset/problem/1411/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string S;
        cin >> S;

        int count1 = 0;
        int count2 = 0;

        for(int i=n-1; i>=0; i--){
            if(S[i]==')'){
                count1++;
            }else{
                break;
            }
        }

        if(count1>(n-count1)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}