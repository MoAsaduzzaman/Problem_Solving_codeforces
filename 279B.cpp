// Problem name: 279B 
// https://codeforces.com/contest/279/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solve_by_asad(ll n, ll t){

    vector <ll> a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    ll count = -1;
    ll sum = 0;
    ll ans = 0;
    
    for(ll i=0; i<n; i++){
        if(sum+a[i]<=t){
            sum+=a[i];
        }else{
            sum+=a[i];
            while(sum>t){
                count++;
                sum-=a[count];
            }
        }
        ans = max(ans,i-count);
    }

    return ans;
}

int main(){
    ll n,t;
    cin >> n >> t;
    cout << solve_by_asad(n,t) << endl;
    return 0; 
}
