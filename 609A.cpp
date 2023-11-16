//Problem name: 609A 
//https://codeforces.com/problemset/problem/609/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector <int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end(), greater <int> ());

    int count = 0;
    int ans = 0;

    for(int i=0; i<n; i++){
        m-=a[i];
        if(m>0){
            count++;
        }else{
            break;
        }  
    }
    
    cout << count+1 << endl;

    return 0;
}