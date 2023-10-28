//Problem name: 1741A
//https://codeforces.com/problemset/problem/1741/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;

        int lena = a.length();
        int lenb = b.length();

        if(a[lena-1]=='S' && (b[lenb-1]=='M' || b[lenb-1]=='L')){
            cout << "<" << endl;
        }else if(a[lena-1]=='M' && b[lenb-1]=='L'){
            cout << "<" << endl;
        }else if(a[lena-1]=='M' && b[lenb-1]=='S'){
            cout << ">" << endl;
        }else if(a[lena-1]=='L' && (b[lenb-1]=='M' || b[lenb-1]=='S')){
            cout << ">" << endl;
        }else if((a[lena-1]=='S' && b[lenb-1]=='S')){
            if(lena>lenb){
                cout << "<" << endl;
            }else if(lena<lenb){
                cout << ">" << endl;
            }else if(lena==lenb){
                cout << "=" << endl;
            }
        }else if((a[lena-1]=='M' && b[lenb-1]=='M')){
            if(lena>lenb){
                cout << ">" << endl;
            }else if(lena<lenb){
                cout << "<" << endl;
            }else if(lena==lenb){
                cout << "=" << endl;
            }
        }else if((a[lena-1]=='L' && b[lenb-1]=='L')){
            if(lena>lenb){
                cout << ">" << endl;
            }else if(lena<lenb){
                cout << "<" << endl;
            }else if(lena==lenb){
                cout << "=" << endl;
            }
        }
    }

    return 0;
}