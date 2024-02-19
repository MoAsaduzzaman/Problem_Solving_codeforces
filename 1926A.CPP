// Problem name: 1926A
// https://codeforces.com/contest/1926/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int A = 0;
        int B = 0;
        for(int i=0; i<5; i++){
            if(s[i]=='A') A++;
            else B++;
        }

        if(A>B) cout << "A" << endl;
        else cout << "B" << endl;
    }
    return 0;
}