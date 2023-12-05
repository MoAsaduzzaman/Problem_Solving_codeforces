//Problem name: 1907B 
//https://codeforces.com/contest/1907/problem/B

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        vector <tuple<char, int>> x, y;
    
        for(int i=0; i<s.size(); i++){
            if(isupper(s[i])){
                if(s[i]=='B' && !y.empty()){
                    y.pop_back();
                }else if(s[i] != 'B'){
                    y.push_back({ s[i], i });
                }
            }else{
                if(s[i]=='b' && !x.empty()){
                    x.pop_back();
                }else if (s[i] != 'b'){
                    x.push_back({ s[i], i });
                }
            }
        }

        int a=0,b=0;

        while (a < x.size() || b < y.size()) {
            char upperChar, lowerChar;

            if (a == x.size()) {
                tie(lowerChar, ignore) = y[b++];
                cout << lowerChar;
                continue;
            }

            if (b == y.size()) {
                tie(upperChar, ignore) = x[a++];
                cout << upperChar;
                continue;
            }

            char uChar, lChar;
            int uIdx, lIdx;

            tie(uChar, uIdx) = x[a];
            tie(lChar, lIdx) = y[b];

            if (uIdx < lIdx) {
                cout << uChar;
                a++;
            } else {
                cout << lChar;
                b++;
            }
        }
       cout << endl;
    }

    return 0;
}