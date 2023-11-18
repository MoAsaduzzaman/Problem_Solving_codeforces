//Problem name: 219158J 
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;

    if(A%B==0 || B%A==0){
        cout << "Multiples" << endl;
    }else{
        cout << "No Multiples" << endl;
    }

    return 0;
}