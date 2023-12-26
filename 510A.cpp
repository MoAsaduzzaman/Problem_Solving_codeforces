// Problem name: 510A 
// https://codeforces.com/problemset/problem/510/A

#include<bits/stdc++.h>
using namespace std;

void asad(int n, int m){

    int count = 0;

    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<m; j++){
                cout << "#";
            }
        }else{
            count++;

            for(int j=0; j<m; j++){
                if(count%2==1 && j==m-1){
                    cout << "#";
                }else if(count%2==0 && j==0){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    
}

int main(){
    int n,m;
    cin >> n >> m;
    asad(n,m);
    return 0;
}