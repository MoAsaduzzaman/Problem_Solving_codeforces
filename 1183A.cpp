//Problem name: 1183A 
//https://codeforces.com/problemset/problem/1183/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;

    int ans = a;

    if(a<=10 && a%4!=0){
        if(a<4){
            cout << 4 << endl;
        }else if(a<8){
            cout << 8 << endl;
        }else{
            cout << 13 << endl;
        }
        return 0;
    }

    while(1){

        int sum = 0;
        while(a>=10){
            sum+=a%10;
            a/=10;
            if(a<10){
                sum+=a;
            }
        }

        if(sum%4==0){
            cout << ans << endl;
            break;
        }else{
            ans++;
            a=ans;
        }
    }

    return 0;
}