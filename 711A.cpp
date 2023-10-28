//Problem name: 711A
//https://codeforces.com/problemset/problem/711/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    int cnt = 0;
    vector <string> a(n);

    for(int i =0; i<n; i++){
        cin >> s;

        if(s[0]=='O' && s[1]=='O' && cnt==0){
            s[0]='+';
            s[1]='+';
            cnt=1;
            a[i]=s;
        }else if(s[3]=='O' && s[4]=='O' && cnt==0){
            s[3]='+';
            s[4]='+';
            cnt=1;
            a[i]=s;
        }else{
            a[i]=s;
        }
    }

    if(cnt==1){
        cout << "YES" << endl;
        for(int i=0; i<n; i++){
            cout << a[i] << endl;
        }
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
