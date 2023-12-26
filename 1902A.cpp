//Problem name: 1902A 
//https://codeforces.com/contest/1902/problem/A

#include<bits/stdc++.h>
using namespace std;

string asad(int n, string s){
    
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
        return "YES";
    }else{
        if(count2 != 0){
            return "YES";
        }else{
            return "NO";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << asad(n,s) << endl;
        t--;
    }
    return 0;
}
