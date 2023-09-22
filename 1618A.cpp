//Problem name: 1618A
//https://codeforces.com/problemset/problem/1618/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a[8];
    cin >> t;
    while(t){
        for(int i=0; i<7; i++){
            cin >>a[i];
        }
        cout << a[0] << " " << a[1] << " " << a[6]-a[0]-a[1] << endl;
        t--;
    }
    return 0;
}

