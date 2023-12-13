//Problem name: 1829B 
//https://codeforces.com/problemset/problem/1829/B

#include<bits/stdc++.h>
using namespace std;

void asad(){
    int n;
    cin >> n;

    vector <int> a(n);

    int count = 0;
    int max = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==0){
            count++;
        }else{
            count=0;
        }

        if(count>=max){
            max = count;
        }
    }

    cout << max << endl;

}

int main(){
    int t;
    cin >> t;
    while(t){
        asad();
        t--;
    }
    return 0;
}