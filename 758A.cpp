//Problem name: 758A 
//https://codeforces.com/contest/758/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <int> a(n);

    int max = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>max){
            max = a[i];
        }
    }

    int ans = 0;

    for(int i=0; i<n; i++){
        ans+=(max-a[i]);
    }

    cout << ans << endl;

    return 0;
}