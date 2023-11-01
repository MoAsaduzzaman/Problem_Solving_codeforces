//Problem name: 1611B 
//https://codeforces.com/problemset/problem/1611/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;

        if (a < b){       
            swap(a,b);
        }
        
        int dif = abs(a-b);
        int x = dif/2;
        int ans = min(x,b) + (b-min(x,b))/2;
        cout << ans << endl;
    }

    return 0;
}
