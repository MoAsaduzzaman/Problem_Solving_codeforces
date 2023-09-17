//Problem name: 1676A
//https://codeforces.com/problemset/problem/1676/A

#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        string a;
        int sum_first=0,sum_last=0;
        cin >> a;
        int size = a.size();
        for(int i=0; i<size; i++){
            if(i<3){
                sum_first+=a[i];
            }else{
                sum_last+=a[i];
            }
        }

        if(sum_first==sum_last){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        } 
    }

    return 0;
}