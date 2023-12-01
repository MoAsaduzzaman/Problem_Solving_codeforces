//Problem name: 1903C 
//https://codeforces.com/contest/1903/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;

        vector <long long int> a(n);

        for(int i=0; i<n; ++i) {
            cin >> a[i];
        }

        long long int cnt = 0;

        vector <pair<long long int, long long int>> x(n + 1, {0, 1});

        x[n] = {0, 1};

        for(long long int i=n-1; i>=0; --i){
            long long int total = x[i + 1].first;
            long long int count = x[i + 1].second;

            x[i] = {total + a[i], count};
            x[i] = max(x[i], {total + cnt + a[i], count + 1});
            cnt+=a[i];
        }
        cout << x[0].first << endl;
    }

    return 0;
}

