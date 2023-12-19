// Problem name: 705A 
// https://codeforces.com/problemset/problem/705/A

#include<bits/stdc++.h>
using namespace std;

string asad(int n){
    string feelings= "";
    for (int i=1; i<=n; i++) {
        if(i%2==1){
            feelings+="I hate ";
        }else{
            feelings+="I love ";
        }
        if(i!=n) {
            feelings+="that ";
        }
    }
    feelings+="it";
    return feelings;
}

int main() {
    int n;
    cin >> n;
    cout << asad(n) << endl;
    return 0;
}
