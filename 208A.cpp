// Problem name: 208A 
// https://codeforces.com/contest/208/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr;
    cin >> arr;
    int l = arr.length();
    int f = 1;

    for(int i = 0; i < l; i++){
        if (arr[i] == 'W' && arr[i + 1] == 'U' && arr[i + 2] == 'B'){
            i += 2;
            if (f == 0){
                cout << " ";
                f = 1;
            }
        }else{
            cout << arr[i];
            f = 0;
        }
    }
  return 0;
}

