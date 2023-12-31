// Problem name: 151A 
// https://codeforces.com/contest/151/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ans1 = k*l; 
    int ans2 = ans1/nl;  
    int ans3 = c*d;  
    int ans4 = p/np;

    int ans5 = min(ans2,ans3);
    int ans6 = min(ans5,ans4);

    cout << ans6/n << endl;

    return 0;
}