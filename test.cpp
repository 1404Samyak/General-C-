#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// void DFS(ll node, const vector<vector<ll>>& adj, vector<ll>& visited, vector<ll>& component, int id) {
//     component[node] = id;      // Assign component ID
//     visited[node] = 1;         // Mark as visited
//     for (ll i : adj[node]) {
//         if (!visited[i]) {
//             DFS(i, adj, visited, component, id);
//         }
//     }
// }
void DFS1(ll node,ll parent,const vector<vector<ll>>&adj,vector<ll>&visited,bool &ans){
    //no operation on starting node
    visited[node]=1;
    for(ll i:adj[node]){
        if(visited[i]==0){
            DFS1(i,parent,adj,visited,ans);
        }
        else{
            if(i!=parent)ans=true;
        }
    }
}
int main() {
    ll n, m;
    cin >> n >> m;  // n = nodes, m = edges
    vector<vector<ll>> adj(n);
    for (ll i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ans=false;
    vector<ll> visited(n, 0);
    // vector<ll> component(n, 0);
    // ll id = 0;
    // for (ll i = 0; i < n; i++) {
    //     if (!visited[i]) {
    //         id++;
    //         DFS(i, adj, visited, component, id);
    //     }
    // }
    for(ll i=0;i<n;i++){
        if(visited[i]==0){
            DFS1(i,-1,adj,visited,ans);
        }
    }
    
    return 0;
}
