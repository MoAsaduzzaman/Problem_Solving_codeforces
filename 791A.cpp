//Problem name: 791A
//https://codeforces.com/contest/791/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;

    int count = 0;

    for(int i = 1; i<100; i++){
        a*=3;
        b*=2;

        if(a>b){
            count++;
            break;
        }else{
            count++;
            continue;
        }
    }

    cout << count << endl;

    return 0;
}