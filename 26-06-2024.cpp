

class Solution {
public:
    int FindCoverage(vector<vector<int>>&matrix){
        // Code here
        int ans = 0 ;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ;j++){
                if(matrix[i][j] == 0){
                if(j - 1 >= 0 && matrix[i][j-1] == 1)
                   ans ++ ;
                if(j + 1 < matrix[0].size() && matrix[i][j+1] == 1)
                   ans ++ ;
                if(i - 1 >= 0 && matrix[i-1][j] == 1)
                   ans ++ ;
                if(i + 1 < matrix.size() && matrix[i+1][j] == 1)
                   ans ++ ;
                    
                }
           }
        }
        return ans ;
    }
};
