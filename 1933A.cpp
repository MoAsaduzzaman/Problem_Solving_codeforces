// Problem name: 1933A 
// https://codeforces.com/contest/1933/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxSumAfterRearrangement(vector<int> &a){
    int n = a.size();
    int sum = 0, negCount = 0;

    for (int num : a){
        sum += abs(num);
        negCount += num < 0;
    }

    if (2 * negCount > n){
        return sum;
    }

    sort(a.begin(), a.end());

    if (negCount > 0){
        for (int i = 0; i < negCount; ++i){
            a[i] = -a[i];
        }
    }

    return sum;
}

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }

        int res = maxSumAfterRearrangement(a);
        cout << res << endl;
    }

    return 0;
}
