//Problem name: 219432V 
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;

    int size = (N*4);

    vector <int> a(size);

    for(int i=1; i<=size; i++){
        cout << i << " " << i+1 << " " << i+2 << " " << "PUM" << endl;
        i+=3;
    }

    return 0;
}