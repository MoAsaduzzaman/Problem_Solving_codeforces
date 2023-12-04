//Problem name: 1902B 
//https://codeforces.com/contest/1902/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,b,c,d;

        cin >>n >> b >> c >> d;

        long long int rac = (n-n%7) / 7 + 1;
        rac -= (n%7 == 0 ? 1:0);
        long long int left = 1,rig = rac ;
        long long int ans = rac;

        while(left<=rig){
            long long int mid = (left + rig) / 2;

            if(b <= (mid+1) / 2 * c + d*mid){
                ans = mid;
                rig = mid - 1;
            }else{
                left = mid + 1 ;
            }
        }
            long long int x = (ans + 1) / 2;
            long long int y = (x*c) + (d*ans);
            b = b - y;
            long long int f_ans = x;
            b = max(b,0LL);
            f_ans = f_ans + (b / c);
            f_ans = f_ans + (b % c != 0);

            cout << n-f_ans<< " ";

            cout << endl;
    }
    return 0;
}
