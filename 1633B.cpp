//Problem name: 1633B 
//https://codeforces.com/contest/1633/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int len = s.length();
        int zerocount = 0;
        int onecount = 0;

            for(int i=0; i<len; i++){
                if(s[i]=='0'){
                zerocount+=1;
                }else if(s[i]=='1'){
                onecount+=1;
                }
            }

           if(zerocount!=onecount){
                cout << min(zerocount,onecount) << endl;
           }  else{
            cout << zerocount-1 << endl;
           }
    }
    return 0;
}