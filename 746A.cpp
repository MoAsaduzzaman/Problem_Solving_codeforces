//Problem name: 746A 
//https://codeforces.com/problemset/problem/746/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int count = 0;

    while(1){
        if(a*2<=b && a*4<=c){
            cout << a+(2*a)+(4*a) << endl;
            break;
        }else{
            a-=1;
        }
    }
    
    return 0;
}