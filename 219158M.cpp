//Problem name: 219158M 
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin >> ch;

    if(isupper(ch)){
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }else if(islower(ch)){
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    }else if(isdigit(ch)){
        cout << "IS DIGIT" << endl;
    }

    return 0;
}