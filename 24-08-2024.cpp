class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int solve(int wt,int index, vector<int> &wtArray,vector<int> &val){
        //cout << index << "  ";
        
        if(wt == 0 || index == 0){
            if((wt - wtArray[0]) >= 0 )
               return val[0];
            return 0 ;
        }
    
        int ans = solve(wt,index-1,wtArray,val) ;
        
        if( (wt - wtArray[index]) >= 0 ){
            ans = max(ans,val[index] + solve(wt-wtArray[index],index-1,wtArray,val)) ;
        } 
        
       return ans;
       }
    
    
    
    int knapSack(int W, vector<int>& weight, vector<int>& val) {
        // Your code here
       // vector<vector<int>>
        //return solve(W, wt.size() - 1,wt,val) ;////////////////////////////
        vector<vector<int>> dp(W+1,vector<int> (val.size(),0));
        for(int i = 0 ; i <= W ;i++){
            if((i - weight[0]) >= 0){
                dp[i]
                [0] = val[0] ;
            }
        }
        int ans = 0 ;
        for(int i = 1 ; i <= W ; i++){
            for(int j = 1 ; j < val.size() ;j++){
                ans = dp[i][j-1];
                if(i -  weight[j] >= 0){
                    ans = max(ans,dp[i-weight[j]][j-1]+val[j]);
                }
                dp[i][j] = ans ;
            } 
            
        }
        return dp[W][val.size()-1];
    }
};
