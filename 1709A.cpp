//Problem name: 1709A
//https://codeforces.com/problemset/problem/1709/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int a,b,c;
        cin >> a >> b >> c;

        map <int,int> key;

        key.insert(make_pair(1,a));
        key.insert(make_pair(2,b));
        key.insert(make_pair(3,c));

        bool ans = false;

        for(int i=1; i<3; i++){
            if(key[x]==0){
                ans = true;
                break;
            }
            x=key[x];
        }

        if(ans==false){
            cout << "Yes" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}