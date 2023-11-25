//Problem name: 1896B 
//https://codeforces.com/contest/1896/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;

        string s;
        cin >> s;

        long long count = 0;
        long long int result = 0;

        for(long long int i=n; i>=0; i--){
            if(s[i]=='B'){
                count++;
            }else{
                result+=count;
                if(count){
                    s[i]='B';
                    count=0;
                    i++;
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}


