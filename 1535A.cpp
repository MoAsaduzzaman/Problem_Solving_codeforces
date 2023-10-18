//Problem name: 1535A
//https://codeforces.com/problemset/problem/1535/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int s1,s2,s3,s4;
        cin >> s1 >> s2 >> s3 >> s4;

        int max1 = max(s1,s2);
        int min1 = min(s1,s2);

        int max2 = max(s3,s4);
        int min2 = min(s3,s4);

        if(min1>max2){
            cout << "NO" << endl;
        }else if(min2>max1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}