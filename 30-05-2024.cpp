class Solution {
  public:
    #define mod 1000000007 
    int solve(string &s1 , string &s2 , int lenOne , int lenTwo , int i , int j,vector<vector<int>> &dp){
        if(j == lenTwo)return 1 ;
        if(i == lenOne)return 0 ;
        //if Matched
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int include = 0 ;
        if(s1[i] == s2[j]){
            include = solve(s1,s2,lenOne,lenTwo,i+1,j+1,dp)%mod;
        }
         int exclude =  solve(s1,s2,lenOne,lenTwo,i+1,j,dp)%mod;
         dp[i][j] = (include + exclude) % mod ;
         return dp[i][j];  
        
    }
    int countWays(string s1, string s2) {
        vector<vector<int>> dp (s1.length(),vector<int>(s2.length(),-1));
        int lenOne = s1.length();
        int lenTwo = s2.length();
        return (solve(s1,s2,lenOne,lenTwo,0,0,dp)%mod);
    }
};

