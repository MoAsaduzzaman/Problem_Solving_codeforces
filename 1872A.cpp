// Problem name: 1872A 
// https://codeforces.com/contest/1872/problem/A

#include<bits/stdc++.h>
using namespace std;

int asad(int a, int b, int c){
    int x = a-b;
    int y = 2*c;

    int count = abs(x/y);

    if(abs(x%y)){
        count++;
    }

    return count;
}

int main(){
    int t;
    cin >> t;
    while(t){
        int a,b,c;
        cin >> a >> b >> c;
        cout << asad(a,b,c) << endl;
        t--;
    }
    return 0;
}

