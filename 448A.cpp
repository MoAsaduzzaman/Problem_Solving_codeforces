//Problem name: 448A 
//https://codeforces.com/problemset/problem/448/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2,a3;
    int b1,b2,b3;
    int n;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int ans_a = a1+a2+a3;
    int ans_b = b1+b2+b3;

    ans_a = ceil(ans_a * 1.00 / 5.00);
    ans_b = ceil(ans_b * 1.00 / 10.00);

    int final_ans = ans_a + ans_b;

    if(final_ans<=n){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}