//Problem name: 1884A
//https://codeforces.com/contest/1884/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while (t--) {
        int x, k;
        cin >> x >> k;

        int sum_of_digits = 0;
        int original_x = x;

        while (x > 0) {
            sum_of_digits += x % 10;
            x /= 10;
        }

        int y = original_x;
        while (sum_of_digits % k != 0) {
            y++;
            int temp_y = y;
            sum_of_digits = 0;

            while (temp_y > 0) {
                sum_of_digits += temp_y % 10;
                temp_y /= 10;
            }
        }

        cout << y << endl;
    }

    return 0;
}