//Problem name: 378A
//https://codeforces.com/problemset/problem/378/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;

    int first_player_wins = 0;
    int second_player_wins = 0;
    int draw = 0;

    for(int i=1; i<=6; i++){
        if(abs(a-i)>abs(b-i)){
            second_player_wins++;
        }else if(abs(a-i)<abs(b-i)){
            first_player_wins++;
        }else{
            draw++;
        }
    }

    cout << first_player_wins << " " << draw << " " << second_player_wins << endl;

    return 0;
}