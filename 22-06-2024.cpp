class Solution {
  public:
    long long ExtractNumber(string sentence) {
        long long ans = -1 ;
        
              
        long long temp ;
        int i = 0 ;
        while(i < sentence.length()){
            int val = sentence[i] - '0';
            if(val >= 0 && val <= 9){
                int flag = false ;
                temp = 0 ;
                while(i < sentence.length() && (sentence[i]-'0') >= 0 && (sentence[i]-'0') <= 9){
                    int numData = sentence[i] - '0';
                    if(numData == 9){
                     flag = true ;
                    }else{
                        temp = temp*10 + numData;
                    }
                    i++ ;
                }
                if(!(flag)){
                    ans = max(ans,temp);
                }
            }
            i++ ;
        }
        return ans ;
    }
};
