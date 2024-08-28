// User function Template for C++
class Solution {/////////////////////////////0/////////////////////////////////////////////////////
  public:
    void dfs(unordered_map<int,list<int>> &mp,vector<int> &ans,vector<int> &vis,int src ,int d){
        ans[src] = d ;
        vis[src] = 1 ;
        for(auto it : mp[src]){
            if(!(vis[it])){
                dfs(mp,ans,vis,it,d+1);
            }else{
                ans[it] = min(ans[it],d+1);
            }
        }
    }
    
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        
        unordered_map<int,list<int>> mp ;
        for(int i = 0 ; i < edges.size() ; i++){
            int u = edges[i][0] ;
            int v = edges[i][1] ;
            mp[u].push_back(v) ;
            mp[v].push_back(u) ;
        }
            
        vector<int> ans(N,-1);
        vector<int> vis(N,0) ;
        //dfs(mp,ans,vis,src,0);
        queue<pair<int,int>> q ; //node && dis
        q.push(make_pair(src,0));
       
        while(!(q.empty())){
            pair<int,int> data = q.front() ;
            int node = data.first ;
            int d = data.second ;
            //cout << node << "  " ;
            q.pop() ;
            ans[node] = d ;
            vis[node] = 1 ;
            for(auto it : mp[node]){
                if(!(vis[it])){
                    q.push({it,d+1});
                    vis[it] = 1 ;
                }
            }
        }//cout << endl ;
        return ans ;
    }
};
