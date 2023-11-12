//Problem name: 1249A
//https://codeforces.com/problemset/problem/1249/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;

        vector <int> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        } 

        int ans1dif = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j && i==0) continue;
                if(a[i]-a[j]==1){
                    ans1dif++;
                }
            }
        }

        if(ans1dif==0){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }

    }

    return 0;
}