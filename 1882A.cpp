//Problem name: 1882A
//https://codeforces.com/contest/1882/problem/A

#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int test_case,n;
    cin >> test_case;

    while(test_case--){
        cin >> n;
        vector <int> asad(n);

        for(int i=0; i<n; i++)
            cin >> asad[i];
            int cnt =1;
        for(int i=0; i<n; i++){
            if(i==0){
                if(asad[i]==cnt)
                    cnt++;
                    continue;
            }
            cnt++;
            if(asad[i]==cnt)
                cnt++;
        }
        cout << cnt << endl;
        test_case--;
    }
    return 0;

