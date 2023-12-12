//Problem name: 110A 
//https://codeforces.com/contest/110/problem/A

#include<bits/stdc++.h>
using namespace std;

int countLuckyDigits(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    return count;
}

bool isLucky(int num) {
    return num == 4 || num == 7;
}

int main() {
    long long n;
    cin >> n;

    int luckyDigitCount = countLuckyDigits(n);

    if (isLucky(luckyDigitCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
