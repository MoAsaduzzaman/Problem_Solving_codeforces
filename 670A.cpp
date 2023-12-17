//Problem name: 670A 
//https://codeforces.com/contest/670/problem/A

#include<bits/stdc++.h>
using namespace std;

void asad(){
    long long int n;
    while(cin >> n){
        int maximum = (n/7)*2;
        int minimum = (n/7)*2;

        if((n%7)<=2){
            maximum+=(n%7);
        }else{
            maximum+=2;
        }

        if((n%7)==6){
            minimum++;
        }

        cout << minimum << " " << maximum << endl;
    }
}
    
int main(){
    asad();
    return 0;
}

