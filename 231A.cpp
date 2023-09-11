//Problem name: 231A
//https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;
int main(){

    int n,p1,p2,p3,cnt=0;

    cin >> n;

    while(n--){

        cin >> p1 >> p2 >> p3;

       
            if(p1==1 && p2==1 && p3==1){
                cnt++;
            }
            if(p1==0 && p2==1 && p3==1){
                cnt++;
            }
            if(p1==1 && p2==0 && p3==1){
                cnt++;
            }
            if(p1==1 && p2==1 && p3==0){
                cnt++;
            }
            
    }

    cout << cnt << endl;

    return 0;
}