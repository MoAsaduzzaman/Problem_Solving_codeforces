//Problem name: 987A 
//https://codeforces.com/problemset/problem/987/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <string> s(6);

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    string a = "Power"; 
    string b = "Time";
    string c = "Space";
    string d = "Soul";
    string e = "Reality";
    string f = "Mind";

    string a1 = "purple"; 
    string b1 = "green";
    string c1 = "blue";
    string d1 = "orange";
    string e1 = "red";
    string f1 = "yellow";

    int a_count = 0;
    int b_count = 0;
    int c_count = 0;
    int d_count = 0;
    int e_count = 0;
    int f_count = 0;

    if(n==0){
        cout << 6-n << endl;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
        cout << f << endl;
    }else{
        for(int i=0; i<n; i++){
            if(s[i]==a1){
                a_count++;
            }
            if(s[i]==b1){
                b_count++;
            }
            if(s[i]==c1){
                c_count++;
            }
            if(s[i]==d1){
                d_count++;
            }
            if(s[i]==e1){
                e_count++;
            }
            if(s[i]==f1){
                f_count++;
            }
        }

        cout << 6-n << endl;

        if(a_count==0){
            cout << a << endl;
        }
        if(b_count==0){
            cout << b << endl;
        }
        if(c_count==0){
            cout << c << endl;
        }
        if(d_count==0){
            cout << d << endl;
        }
        if(e_count==0){
            cout << e << endl;
        }
        if(f_count==0){
            cout << f << endl;
        }
    }

    return 0;
}