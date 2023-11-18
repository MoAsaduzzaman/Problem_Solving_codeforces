//Problem name: 1899E 
//https://codeforces.com/contest/1899/problem/E

#include<bits/stdc++.h>
using namespace std;

int minOpToSort(vector <int> & a) {
    int n = a.size();
    int minIndex = 0;

    for(int i=0; i<n; i++){
        if(a[i] < a[minIndex]){
            minIndex = i;
        }
    }

    int ans = minIndex;

    for(int i=minIndex; i<n-1; i++){
        if(a[i] > a[i + 1]){
            ans = -1;
            break;
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);

        for(int i=0; i<n; i++) {
            cin >> a[i];
        }

        int final_ans = minOpToSort(a);

        cout << final_ans << endl;
    }

    return 0;
}