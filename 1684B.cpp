//Problem name: 1684B 
//https://codeforces.com/problemset/problem/1684/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int x = a+b+c;
        int y = b+c;
        int z = c;

        cout << x << " " << y << " " << z << endl;

    }
    return 0;
}
