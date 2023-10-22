//problem name: 1462A
//https://codeforces.com/problemset/problem/1462/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector <int> b(n);

        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        int i=0;
        int j=n-1;
        vector <int> ans;

        while(i<j){
            ans.push_back(b[i]);
            ans.push_back(b[j]);
            i++;
            j--;
        }

        if(n%2==1){
            ans.push_back(b[i]);
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
    }
    return 0;
}