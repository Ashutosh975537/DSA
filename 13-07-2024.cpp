class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        unordered_map<int,list<pair<int,int>>> mp ;
        vector<int> vis(n+1,0);
        vector<long long> dis(n+1,INT_MAX);
        vector<int> parent(n+1,-1);
        parent[1] = -1 ;
        dis[1] = 0 ;
        vis[1] = 1 ;
        for(int i = 0 ; i < edges.size() ; i++){
            int u = edges[i][0] ;
            int v =  edges[i][1] ;
            int w = edges[i][2] ;
            mp[u].push_back(make_pair(v,w));
            mp[v].push_back(make_pair(u,w));
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;  //weight , node
         pq.push(make_pair(0,1)); 
        while(!(pq.empty())){
            pair<int,int> front = pq.top();
            pq.pop();
            int w =  front.first ;
            int node = front.second ;
            vis[node] = 1 ;
            for(auto it : mp[node]){
                int neigh  = it.first ;
                int weight = it.second ;
                if((dis[node] + weight) < dis[neigh]){
                    dis[neigh] = dis[node] + weight ;
                    parent[neigh] = node ;
                    if(!(vis[neigh]))
                       pq.push({dis[neigh],neigh});
                }
            }
        }
        if(dis[n] == INT_MAX){
            return {-1} ;
        }else{
            vector<int>ans;
            ans.push_back(dis[n]) ;
            int pat = parent[n] ;
            ans.push_back(1);
            while(pat != 1 && pat != -1){
                ans.push_back(pat);
                pat = parent[pat];
            }
             int i = 2 ;
             int j = ans.size() - 1 ;
             while(i < j){
                 swap(ans[i++],ans[j--]);
             }
             ans.push_back(n);
             return ans ;
        }
       
    }
};
