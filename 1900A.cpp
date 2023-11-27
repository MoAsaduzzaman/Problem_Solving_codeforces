//Problem name: 1900A
// https://codeforces.com/contest/1900/problem/A

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

        int waterCount = 0;
        int ans = 0;
        int result = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '.' && ans==1){
                waterCount++;
                result++;                
            }

            if(result>=3){
                waterCount = 2;
                break;
            }

            if(s[i]=='.' && ans==0){
                ans = 1;
                waterCount++;
                result++;
            }

            if(ans==1 && s[i]=='#'){
                result = 0;
                ans = 0;
            }
        }
        
        cout << waterCount << endl;  
    }
    return 0;
}