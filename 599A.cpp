//Problem name: 599A 
//https://codeforces.com/problemset/problem/599/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int d1,d2,d3;
    cin >> d1 >> d2 >> d3;

    int way1 = d1+d3+d2;
    int way2 = d1+d1+d2+d2;
    int way3 = d1+d3+d3+d1;
    int way4 = d2+d3+d3+d2;

    int mindis = min(min(way1,way2) , min(way3,way4));

    cout << mindis << endl;

    return 0;
}