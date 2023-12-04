//Problem name: 1902A 
//https://codeforces.com/contest/1902/problem/A

#include<bits/stdc++.h>
using namespace std;

void isPossible(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            count1++;
        }else{
            count2++;
        }
    }

    if(count2 > count1){
        cout<<"YES"<<endl;
    }else{
        if(count2 == 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        isPossible();
    }
    return 0;
}
