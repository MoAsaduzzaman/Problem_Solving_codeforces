//Problem name: 1905B 
//https://codeforces.com/contest/1905/problem/B

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> readEdgesAndBuildAdjList(int n) {
    vector<vector<int>> adjList(n+1);
    for(int i=1; i<n; i++){
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    return adjList;
}

int calculateAnswer(const vector<vector<int>>& adjList) {
    int cnt = 0;
    for(int i=1; i<adjList.size(); i++){
        if(adjList[i].size() == 1) cnt++;
    }
    return (cnt+1)/2;
}

int main(){
    int t = 0;
    cin >> t;
    while(t--){
        int n = 0;
        cin >> n;
        vector<vector<int>> adjList = readEdgesAndBuildAdjList(n);
        int ans = calculateAnswer(adjList);
        cout << ans << endl;
    }
    return 0;
}
