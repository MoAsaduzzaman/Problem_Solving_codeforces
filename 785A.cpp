//Problem name: 785A
//https://codeforces.com/problemset/problem/785/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin >> n;
    while(n--){
        string name;
        cin >> name;

        if(name=="Tetrahedron"){
                sum+=4;
        }else if(name=="Cube"){
                sum+=6;
        }else if(name=="Octahedron"){
                sum+=8;
        }else if(name=="Dodecahedron"){
                sum+=12;
        }else if(name=="Icosahedron"){
                sum+=20;
        }
    }
    cout << sum << endl;

    return 0;
}