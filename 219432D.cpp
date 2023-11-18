//Problem name: 219432D 
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10000-1;

    while(n--){
        int X;
        cin >> X;

        if(X!=1999){
            cout << "Wrong" << endl;
            continue;
        }else{
            cout << "Correct" << endl;
            break;
        }
    }

    return 0;
}