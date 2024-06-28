class Solution {
  public: 

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        string ans = "";
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            int start = 0 ;
            int end = n - 1 ;
            while(start <= end){
              if(arr[i][start] != arr[i][end])
               break ;
               start ++ ;
               end-- ;
            }
            if(start > end){
                if(i >= 10){
                    ans.push_back((i/10)+'0');
                }
                ans.push_back((i%10)+'0');
                ans.push_back(char(32));
                ans.push_back('R');
                return ans;
            }
         
        }
        
        for(int i = 0 ; i < n ; i++){
            int start = 0 ;
            int end = n - 1 ;
            while(start <= end){
              if(arr[start][i] != arr[end][i])
               break ;
               start ++ ;
               end-- ;
            }
            if(start > end){
                if(i >= 10)
                   ans.push_back((i/10)+'0');
                ans.push_back((i%10)+'0');
                ans.push_back(char(32));
                ans.push_back('C');
                return ans;
            }
        }
            
        return "-1";
    }
};
