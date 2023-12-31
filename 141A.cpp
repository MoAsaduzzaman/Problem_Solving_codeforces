// Problem name: 141A 
// https://codeforces.com/contest/141/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

string asad(string x, string y, string z){

    string ans = x+y;

    sort(ans.begin(),ans.end());
    sort(z.begin(),z.end());

    return (ans==z ? "YES" : "NO");

}

int main(){
    string x,y,z;
    while(cin >> x >> y >> z){
        cout << asad(x,y,z) << endl;
    }
    return 0;
}