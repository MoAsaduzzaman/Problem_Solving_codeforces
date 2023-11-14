//Problem name: 1686A 
//https://codeforces.com/problemset/problem/1686/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);

        int sum = 0;

        for(int i=0; i<n; i++){
            cin >> a[i];
            sum+=a[i];
        }
        
        int count = 0;

        for(int i=0; i<n; i++){
            double ans1 = a[i];
            double ans2 = double((sum-a[i]))/(n-1);

            if(ans1==ans2){
                count = 1;
                break;
            }
        }

        if(count==1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}

