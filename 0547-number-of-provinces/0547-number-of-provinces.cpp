class Solution {
public:

void dfs(int node,vector<vector<int>>& adjlist,vector<int>& visited){
    visited[node]=1;
    for(auto it : adjlist[node]){
        if(!visited[it]){
        dfs(it,adjlist,visited);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        
             int n  = isConnected.size();
        int count=0;
        vector<vector<int>>adjlist(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 ){
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
        }
         
         vector<int>visited(n,0);

    for(int i=0;i<n;i++){
          if(!visited[i]){
            count++;
            dfs(i,adjlist,visited);
          }
    }
    return count;

    }
};