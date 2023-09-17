//Problem name: 703A
//https://codeforces.com/problemset/problem/703/A

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,c;
    int m_sum=0;
    int c_sum=0;
    int d_sum=0;

    cin >> n;

    while(n--){
        cin >> m >> c;
        if(m>c){
            m_sum++;
        }
        if(c>m){
            c_sum++;
        }
        if(m==c){
            d_sum++;
        }    
    }

    if(m_sum>c_sum){
            cout << "Mishka" << endl;
    }
    if(m_sum<c_sum){
            cout << "Chris" << endl;
    }
    if(d_sum==n || m_sum==c_sum){
            cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}