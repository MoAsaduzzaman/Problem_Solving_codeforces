//Problem name: 977A 
//https://codeforces.com/problemset/problem/977/A

#include<bits/stdc++.h>
using namespace std;

void asad(){
    long long int n;
    int k;
    cin >> n >> k;

    int count = 0;

    for(int i=0; i<100; i++){
        if(n%10!=0){
            n--;
            count+=1;

            if(count==k){
                break;
            }
        }else{
            n/=10;
            count+=1;

            if(count==k){
                break;
            }
        }
    }
    cout << n << endl;
}

int main(){
    asad();
    return 0;
}