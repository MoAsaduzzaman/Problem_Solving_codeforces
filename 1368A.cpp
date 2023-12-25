// Problem name: 1368A =
// https://codeforces.com/problemset/problem/1368/A

#include<bits/stdc++.h>
using namespace std;

int asad(int a, int b, int n){
    int count = 0;
    int sum = 0;

    while(sum<=n){
        if(sum>n){
            break;
        }

        if(a>b){
            b+=a;
            sum = b;
            count++;
        }else{
            a+=b;
            sum = a;
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while(t){
        int a,b,n;
        cin >> a >> b >> n;
        cout << asad(a,b,n) << endl;
        t--;
    }
    return 0;
}