//Problem name: 1669B
//https://codeforces.com/problemset/problem/1669/B

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

        sort(a.begin(),a.end());

        int sum = 1;
        int flag = 0;

        for(int j=1; j<n; j++){
            if(a[j]==a[j-1]){
                sum++;
            }else{
                sum = 1;
            }

            if(sum>=3){
                cout << a[j] << endl;
                flag = 1;
                break;
            }
        }

        if(flag==0){
            cout << -1 << endl;
        } 
    }
    return 0;
}