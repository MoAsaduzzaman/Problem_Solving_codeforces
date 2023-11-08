//Problem name: 1846B 
//https://codeforces.com/problemset/problem/1846/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b,c;
        cin >> a >> b >> c;

        if(a[0]=='X' && a[1]=='X' && a[2]=='X'){
            cout << "X" << endl;
        }else if(b[0]=='X' && b[1]=='X' && b[2]=='X'){
            cout << "X" << endl;
        }else if(c[0]=='X' && c[1]=='X' && c[2]=='X'){
            cout << "X" << endl;
        }else if(a[0]=='X' && b[0]=='X' && c[0]=='X'){
            cout << "X" << endl;
        }else if(a[1]=='X' && b[1]=='X' && c[1]=='X'){
            cout << "X" << endl;
        }else if(a[2]=='X' && b[2]=='X' && c[2]=='X'){
            cout << "X" << endl;
        }else if(a[0]=='X' && b[1]=='X' && c[2]=='X'){
            cout << "X" << endl;
        }else if(a[2]=='X' && b[1]=='X' && c[0]=='X'){
            cout << "X" << endl;
        }else if(a[0]=='O' && a[1]=='O' && a[2]=='O'){
            cout << "O" << endl;
        }else if(b[0]=='O' && b[1]=='O' && b[2]=='O'){
            cout << "O" << endl;
        }else if(c[0]=='O' && c[1]=='O' && c[2]=='O'){
            cout << "O" << endl;
        }else if(a[0]=='O' && b[0]=='O' && c[0]=='O'){
            cout << "O" << endl;
        }else if(a[1]=='O' && b[1]=='O' && c[1]=='O'){
            cout << "O" << endl;
        }else if(a[2]=='O' && b[2]=='O' && c[2]=='O'){
            cout << "O" << endl;
        }else if(a[0]=='O' && b[1]=='O' && c[2]=='O'){
            cout << "O" << endl;
        }else if(a[2]=='O' && b[1]=='O' && c[0]=='O'){
            cout << "O" << endl;
        }else if(a[0]=='+' && a[1]=='+' && a[2]=='+'){
            cout << "+" << endl;
        }else if(b[0]=='+' && b[1]=='+' && b[2]=='+'){
            cout << "+" << endl;
        }else if(c[0]=='+' && c[1]=='+' && c[2]=='+'){
            cout << "+" << endl;
        }else if(a[0]=='+' && b[0]=='+' && c[0]=='+'){
            cout << "+" << endl;
        }else if(a[1]=='+' && b[1]=='+' && c[1]=='+'){
            cout << "+" << endl;
        }else if(a[2]=='+' && b[2]=='+' && c[2]=='+'){
            cout << "+" << endl;
        }else if(a[0]=='+' && b[1]=='+' && c[2]=='+'){
            cout << "+" << endl;
        }else if(a[2]=='+' && b[1]=='+' && c[0]=='+'){
            cout << "+" << endl;
        }else{
            cout << "DRAW" << endl;
        }        
    }

    return 0;
}