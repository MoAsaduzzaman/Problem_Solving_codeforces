// Problem name: 520A 
// https://codeforces.com/problemset/problem/520/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector <bool> alphabets(28, 0);

    for(int i = 0; i < n; ++i){
    	alphabets[tolower(s[i])-'a'] = 1;
    }

    for (int i = 0; i < 26; ++i){
    	if(!alphabets[i]){
    		cout <<"NO" << endl;
    		return 0;
    	}
    }

    cout << "YES" << endl;
    return 0;
}