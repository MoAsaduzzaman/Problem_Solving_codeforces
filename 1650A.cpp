//Problem name: 1650A 
//https://codeforces.com/problemset/problem/1650/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        char c;
        cin >> c;

        int cnt = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i]==c){
                int left = i-0;
                int right = s.length()-i-1;

                if(left%2==0 && right%2==0){
                    cnt++;
                    break;
                }
            }
        }

        if(cnt){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}