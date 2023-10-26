//Problem name: 1296A
//https://codeforces.com/contest/1296/problem/A

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

        bool flag1 = false;
        bool flag2 = false;
        int cnt = 0;

        for(int i=0; i<n; i++){
           if(a[i]%2==0){
                flag1 = true;
           }else if(a[i]%2!=0){
                flag2 = true;
                cnt++;
           }
        }

        if(flag1==true && flag2==true){
            cout << "YES" << endl;
        }else if(cnt%2!=0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }      
    }
    
    return 0;
}
