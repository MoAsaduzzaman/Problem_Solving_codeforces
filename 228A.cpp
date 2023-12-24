// Problem name: 228A 
// https://codeforces.com/problemset/problem/228/A

#include<bits/stdc++.h>
using namespace std;

int asad(){
    vector <int> a(4);

    for(int i=0; i<4; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    int count = 0;

    for(int i=0; i<4; i++){
        if(a[i]!=a[i+1]){
            count++;
        }
    }

    return 4-count;

}

int main(){
    cout << asad() << endl;
    return 0;
}



