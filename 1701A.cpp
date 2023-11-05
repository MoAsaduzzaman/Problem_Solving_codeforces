//Problem name: 1701A
//https://codeforces.com/problemset/problem/1701/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){

        int arr[2][2];
        int count = 0;

        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cin >> arr[i][j];
                if(arr[i][j]==1){
                    count++;
                }
            }
        }

        if(count==4){
            cout << 2 << endl;
        }else if(count>0){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }

    return 0;
}