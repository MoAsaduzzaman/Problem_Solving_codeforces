//Problem name: 1913A 
//https://codeforces.com/contest/1913/problem/A

#include<bits/stdc++.h>
using namespace std;

void asad(){
    string ab;
        cin >> ab;
        int n = ab.size();
        bool found = false;
        for(int i = 1; i < n; i++) {
            string a = ab.substr(0, i);
            string b = ab.substr(i);
            if(a[0] != '0' && b[0] != '0' && stoi(a) < stoi(b)) {
                cout << a << " " << b << "\n";
                found = true;
                break;
            }
        }
        if(!found) {
            cout << -1 << "\n";
        }
}

int main(){
    int t;
    cin >> t;
    while(t){
        asad();
        t--;
    }
    return 0;
}