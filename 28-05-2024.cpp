class Solution {
  public:
    int solve(int n , int w , vector<int> &cost ,int index,vector<vector<int>> &dp){
        if(w == 0)return 0 ;
        if(index == n){
            return 10000000 ;
        }
        if(dp[index][w] != -1)return dp[index][w];
        int solveOne = 10000000 , solveTwo = 10000000 , solveThree = 10000000 ;
        if(cost[index] == -1){
            solveOne = solve(n,w,cost,index+1,dp);
        }
        if(w - (index + 1) >= 0){
            solveTwo = cost[index] + solve(n,w-(index+1),cost,index,dp);
        }
            solveThree = solve(n,w,cost,index+1,dp);
        return dp[index][w] = min(solveOne,min(solveTwo,solveThree));
    }
    int minimumCost(int n, int w, vector<int> &cost) {
        // code here
        vector<vector<int>> dp(n,vector<int>(w+1,-1));
        int ans = solve(n,w,cost,0,dp);
        if(ans == 10000000)return -1;
        else{
            return ans ;
        }
    }
};
