class Solution {
  public:
    long long solve(int i , int j ,int n ,int length , long long dp[][4][3]){
        if(i < 0 || i > 3 || j < 0 || j > 2)return 0 ;
        if(i == 3 && (j == 0 || j == 2))return 0 ;
        if(length == n -1)return 1 ;
        if(dp[length][i][j] != -1)return dp[length][i][j] ;
        long long ans = 0 ;
        //stay
        ans += solve(i,j,n,length+1,dp);
        //right 
        ans += solve(i,j+1,n,length+1,dp);
        //left 
        ans += solve(i,j-1,n,length+1,dp);
        //up
        ans += solve(i-1,j,n,length+1,dp);
        //down 
        ans += solve(i+1,j,n,length+1,dp);
        dp[length][i][j] = ans ;
        return ans ;
        
    }
    long long getCount(int n) {
        // Your code goes here
        long long dp[n][4][3];
        for(int k = 0 ; k < n ; k++){
            for(int i = 0  ; i < 4 ; i++){
                for(int j = 0 ; j < 3 ; j++){
                    dp[k][i][j] = -1 ;
                }
            }
        }
        long long ans = 0 ;
        for(int i = 0 ; i < 4 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                ans += solve(i,j,n,0,dp);
            }
        }
        return ans ;
    }
};
