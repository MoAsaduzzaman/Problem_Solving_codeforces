//Problem name: 219158O 
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B;
    char S;
    
    cin >> A >> S >> B;

    if(S=='+'){
        cout << A+B << endl;
    }else if(S=='-'){
        cout << A-B << endl;
    }else if(S=='*'){
        cout << A*B << endl;
    }else if(S=='/'){
        cout << A/B << endl;
    }

    return 0;
}