//Problem name: 681A 
//https://codeforces.com/problemset/problem/681/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    bool ans = false;
    while(t--){
        string s;
        int x,y;
        cin >> s >> x >> y;

        if(x>=2400 && x<y){
            ans = true;
        }
    }

    if(ans==true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}