//Problem name: 1875A
//https://codeforces.com/contest/1875/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,n;
        cin >> a >> b >> n;

        vector<long long> x(n);

        for(int i=0;i<n;i++){  
            cin >> x[i];
        }

        sort(x.begin(),x.end());

        long long  final_ans = 0;
        for(long long i:x){
            if(b+i<=a)
                b+=i;
            else{
                final_ans+=(b-1);
                b=min(1+i,a);
            }
        }
        final_ans+=(b);
        cout << final_ans << endl;
    }
    
    return 0;
}

