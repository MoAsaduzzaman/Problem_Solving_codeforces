//Problem name: 1675A
//https://codeforces.com/problemset/problem/1675/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,x,y;
        cin >> a >> b >> c >> x >> y;

        int dog = 0;
        int cat = 0;

        if(x>a){
            dog+=(x-a);
        }
        if(y>b){
            cat+=(y-b);
        }

        if((dog+cat)<=c){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        } 
    }
    
    return 0;
}