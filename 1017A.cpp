//Problem name: 1017A 
//https://codeforces.com/problemset/problem/1017/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = n;

    vector <int> num;
    int sum;
    int a,b,c,d;

    while(n--){
        cin >> a >> b >> c >> d;
        sum = a+b+c+d;
        num.push_back(sum);
    }

    int rank = 1;

    for(int i=0; i<x-1; i++){
        if(num[0]<num[i+1]){
            rank++;
        }
    }

    cout << rank << endl;

    return 0;
}