//Problem name: 677A
//https://codeforces.com/problemset/problem/677/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    int a,cnt=0,cnt2=0;
    cin >> n >> h;
    while(n--){
        cin >> a;
        if(a<=h){
            cnt+=1;
        }else{
            cnt2+=2;
        }
    }
    cout << cnt+cnt2 << endl;

    return 0;
}