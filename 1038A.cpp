// Problem name: 1038A 
// https://codeforces.com/contest/1038/problem/A

#include <bits/stdc++.h>
using namespace std;
map<char,int> ma;
int n,k;
string str;

int main(){
  cin>>n>>k;
  cin>>str;
  int ans = 0x3f3f3f3f;
  
  for(int i=0;i<n;i++){
    if(str[i] <= k + 'A'){
      ma[str[i]]++;
    }
  }
  
  for(int i=0;i<k;i++){
    if(ma[i + 'A'] == 0){
      puts("0");
      return 0;
    }
    ans = min(ans, ma[i + 'A']);
  }
  
  cout<<ans * k<<endl;
  return 0;
}