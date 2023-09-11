//Problem name: 71A
//https://codeforces.com/problemset/problem/71/A

#include<iostream>
#include<string>
using namespace std;
int main(){

    int n;
    string STRING;

    cin >> n;

    while(n--){
        
        cin >> STRING;

        if(STRING.length()>10){
            cout << STRING[0] << STRING.length()-2 << STRING[STRING.length()-1] << endl;
        }else{
            cout << STRING << endl;
        }

    }
    
    return 0;
}