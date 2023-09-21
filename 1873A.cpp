//Problem name: 1873A
//https://codeforces.com/contest/1873/problem/A

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    string crds;
    cin >> t;
    while (t--) {
        cin >> crds;
        if(crds[0]=='a' && crds[1]=='b' && crds[2]=='c'){
            cout << "YES" << endl;
        }else if(crds[0]=='a' && crds[1]=='c' && crds[2]=='b'){
            cout << "YES" << endl;
        }else if(crds[0]=='b' && crds[1]=='a' && crds[2]=='c'){
            cout << "YES" << endl;
        }else if(crds[0]=='c' && crds[1]=='b' && crds[2]=='a'){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
