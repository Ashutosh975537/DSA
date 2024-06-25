class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int n = mat.size();
        k = k % mat[0].size() ;
        if(k == 0) return mat ;
        vector<vector<int>> ans(n,vector<int>(mat[0].size(),0));
        for(int i = 0 ; i < n ; i++){
           for(int j = 0 ; j < mat[0].size() ; j++){
               ans[i][j] = mat[i][(j+k)%mat[0].size()];
           }
        }
        return ans ;
    }
};
