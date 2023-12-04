//Problem name: 1203E  
//https://codeforces.com/problemset/problem/1203/E

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i=0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int prev = 0;
    int cnt = 0;

    for (int now : v) {
        if (now - 1 > prev) {
            cnt++;
            prev = now - 1;
        } else if (now - 1 == prev) {
            cnt++;
            prev = now;
        } else if (now == prev) {
            prev = now + 1;
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

