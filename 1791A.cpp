//Problem name: 1791A
//https://codeforces.com/problemset/problem/1791/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "codeforces";
    char a;
    int t;
    cin >> t;

    while(t--){
        cin >> a;
            switch(a){
                case 'c':
                    cout << "YES" << endl;
                    break;
                case 'o':
                    cout << "YES" << endl;
                    break;
                case 'd':
                    cout << "YES" << endl;
                    break;
                case 'e':
                    cout << "YES" << endl;
                    break;
                case 'f':
                    cout << "YES" << endl;
                    break;
                case 'r':
                    cout << "YES" << endl;
                    break;
                case 's':
                    cout << "YES" << endl;
                    break;
                default:
                    cout << "NO" << endl;
            }
    }

    return 0;
}