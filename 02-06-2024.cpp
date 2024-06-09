class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int> ans ;
        ans.push_back(0) ;
        reverse(queries.begin() , queries.end()) ;
        int Xor = 0 ;
        for(int i = 0 ; i < q ; i++){
            int query = queries[i][0] ;
            int value = queries[i][1] ;
                if(query == 0){
                    value = value ^ Xor ;
                    ans.push_back(value);
                }
                else{
                    Xor = Xor^value ;
                }
            }
        ans[0] = ans[0] ^ Xor ;
        sort(ans.begin() , ans.end());
        return ans ;
    }
};
