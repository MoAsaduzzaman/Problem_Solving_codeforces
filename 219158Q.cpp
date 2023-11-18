//Problem name: 219158Q 
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q

#include<bits/stdc++.h>
using namespace std;
int main(){
    float X,Y;
    cin >> X >> Y;

    if(X>0 && Y>0){
        cout << "Q1" << endl;
    }else if(X<0 && Y>0){
        cout << "Q2" << endl;
    }else if(X<0 && Y<0){
        cout << "Q3" << endl;
    }else if(X>0 && Y<0){
        cout << "Q4" << endl;
    }else if(X==0 && Y==0){
        cout << "Origem" << endl;
    }else if((X>=0 || X<=0) && Y==0){
        cout << "Eixo X" << endl;
    }else if((Y>=0 || Y<=0) && X==0){
        cout << "Eixo Y" << endl;
    }

    return 0;
}