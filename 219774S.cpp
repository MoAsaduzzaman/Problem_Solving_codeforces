//Problem name: 219774S 
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin >> N >> M;

    int size = N*M;

    vector <int> a(size);

    for(int i=0; i<size; i++){
        cin >> a[i];
    }

    int X;
    cin >> X;

    bool ans = false;

    for(int i=0; i<size; i++){
        if(a[i]==X){
            ans = true;
            break;
        }
    }

    if(ans==true){
        cout << "will not take number" << endl;
    }else{
        cout << "will take number" << endl;
    }

    return 0;
}