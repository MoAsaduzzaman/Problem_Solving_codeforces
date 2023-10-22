//Problem name: 1760B
//https://codeforces.com/problemset/problem/1760/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        sort(s.begin(),s.end());
        int len = s.length();
            if(s[len-1]=='a') cout << 1 << endl;
            if(s[len-1]=='b') cout << 2<< endl;
            if(s[len-1]=='c') cout << 3 << endl;
            if(s[len-1]=='d') cout << 4 << endl;
            if(s[len-1]=='e') cout << 5 << endl;
            if(s[len-1]=='f') cout << 6 << endl;
            if(s[len-1]=='g') cout << 7 << endl;
            if(s[len-1]=='h') cout << 8 << endl;
            if(s[len-1]=='i') cout << 9 << endl;
            if(s[len-1]=='j') cout << 10 << endl;
            if(s[len-1]=='k') cout << 11 << endl;
            if(s[len-1]=='l') cout << 12 << endl;
            if(s[len-1]=='m') cout << 13 << endl;
            if(s[len-1]=='n') cout << 14 << endl;
            if(s[len-1]=='o') cout << 15 << endl;
            if(s[len-1]=='p') cout << 16 << endl;
            if(s[len-1]=='q') cout << 17 << endl;
            if(s[len-1]=='r') cout << 18 << endl;
            if(s[len-1]=='s') cout << 19 << endl;
            if(s[len-1]=='t') cout << 20 << endl;
            if(s[len-1]=='u') cout << 21 << endl;
            if(s[len-1]=='v') cout << 22 << endl;
            if(s[len-1]=='w') cout << 23 << endl;
            if(s[len-1]=='x') cout << 24 << endl;
            if(s[len-1]=='y') cout << 25 << endl;
            if(s[len-1]=='z') cout << 26 << endl;  
    }
    return 0;
}