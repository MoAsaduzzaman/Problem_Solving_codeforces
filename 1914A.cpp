//Problem name: 1914A 
//https://codeforces.com/contest/1914/problem/A

#include<bits/stdc++.h>
using namespace std;

void asad(int n){
    string s;
    cin >> s;

    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());

    int solve = 0;
    
    vector <int> x(26);

    for(int i=0; i<26; i++){
        x[i] = i+1;
    }

    for(char j: s){
        x[j-'A']--;
        if(x[j-'A']==0){
            solve++;
        }
    }

    cout << solve << endl;

}

int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        asad(n);
        t--;
    }
    return 0;
}
