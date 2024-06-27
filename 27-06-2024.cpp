


bool isToepliz(vector<vector<int>>& mat) {
    // code here
    int n = mat.size();
    if(n == 1)return true ;
    int m = mat[0].size();
    if(m == 1)return true ;
    for(int i = 0 ; i < n ; i++){
        int val = mat[i][0];
        int j = 0 ;
        int temp = i ;
        while(temp < n && j < m){
            if(mat[temp][j] != val)
               return false ;
            j++;
            temp++;
        }
    }
    int k = 1 ;
    for(int i = 1 ; i < m ; i++){
        int val = mat[0][k];
        int j = k ;
        int temp = 0 ;
        while(temp < n && j < m){
            if(mat[temp][j] != val) 
               return false ;
               temp++;
               j++;
        }
        k++;
    }
    return true ;
}
