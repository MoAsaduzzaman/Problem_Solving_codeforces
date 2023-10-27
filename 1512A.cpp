//Problem name: 1512A
//https://codeforces.com/contest/1512/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int temp = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(a[i]==a[i+1]){
                temp++;
            }else{
                if(a[i+1]!=a[i+2]){
                    ans = i+1+1;
                    break;
                }else{
                    ans = i+1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}