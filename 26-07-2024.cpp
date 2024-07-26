class Solution {
  public:
                                ///////////////////////
    bool kPangram(string str, int k) {
        // code her
        if(str.length() < 26)return false;
        bool arr[26] = {0} ;
        int distinct = 0 ;
        int spaces = 0 ;
        int n = str.length() ;
        for(int i = 0 ; i < str.length() ;i++ ){
            if(str[i] == ' '){
                spaces++;
                continue;
            } 
            int index = str[i] - 'a';
            if(!(arr[index])){
                distinct++;
                arr[index] = 1 ;
            }
        }
        int totalLength = str.length() - spaces ;
        if(totalLength < 26)return false ;
        int required = 26 - distinct ;
        if(required <= k)return true ;
        else return false ;
        
    }
};
