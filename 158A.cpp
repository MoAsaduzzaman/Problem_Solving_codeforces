//Problem name: 158A
//https://codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;

    cin >> n;
    cin >> k;

    int a[n],i,cnt=0;

    for(i=0; i<n; i++)
        cin >> a[i];
        for(i=0; i<n; i++){
            if(a[i] >= a[k-1] && a[i] > 0){
                cnt++;
            }
        }

        cout << cnt << endl;

    return 0;
}