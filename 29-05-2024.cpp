class Solution {
  public:
    int findWinner(int n, int x, int y) {
        // code here
        //The Main crucks is suppose you are able to reach a spot where you were
        //in loosing position that means the opponent cannot win from there as well , hence you are 
        //winning at that particular Index 
        vector<int> dp(n+1);
        dp[0] = 0 ;//because your are starting first and you cannot choose Anything
        dp[1] = 1 ;//because if there exits only one coin you can simply pick the coin and since nothing left the opponent looses
        for(int i = 2 ; i <= n ; i++){
            if(i - 1 >= 0 && dp[i-1] == 0){
                dp[i] = 1 ; 
            }
            if(i - x >= 0 && dp[i-x] == 0){
                dp[i] = 1 ;
            }
            if( i - y >= 0 && dp[i-y] == 0){
                dp[i] = 1 ;
            }
        }
        return dp[n];
    }
};

