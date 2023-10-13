//Problem name: 200B
//https://codeforces.com/problemset/problem/200/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long double sum = 0.00;
    cin >> n;

    vector <long double> p(n);

    for(int i=0; i<n; i++){
        cin >> p[i];
        sum+=p[i];
    }
    
    cout << fixed << setprecision(12) << sum/n << endl;

    return 0;
}