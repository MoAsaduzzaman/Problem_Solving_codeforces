//Problem name: 1807B
//https://codeforces.com/contest/1807/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);

        int mihahi = 0;
        int bianca = 0;

        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2==0){
                mihahi+=a[i];
            }else if(a[i]%2==1){
                bianca+=a[i];
            }
        }

        if(mihahi>bianca){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}