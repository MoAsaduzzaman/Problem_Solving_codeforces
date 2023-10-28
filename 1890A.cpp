//Problem name: 1890A
//https://codeforces.com/contest/1890/problem/A

#include<bits/stdc++.h>
using namespace std;

void fuck(){
    int n;
    cin>>n;

    map <int,int> fuu;
    vector <int> a(2);

    int x=0;

    for(int i=0; i<n; i++){
        cin>>x;
        fuu[x]++;
    }

    if(fuu.size()==1){
        cout<<"YES"<<endl;
        return;
    }
    if(fuu.size()>=3){
        cout<<"NO"<<endl;
        return;
    }

    int i = 0;

    for(auto it:fuu) a[i++]=it.second;
    abs(a[0]-a[1])>=2?cout << "NO" :cout << "YES";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        fuck();
    } 
	return 0;
}