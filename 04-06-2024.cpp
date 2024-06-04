class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        int val = 1 ;
        int carry = 0 ;
        string ans = "";
        for(int i = s.length() - 1 ; i >= 0 ; i--){
            if(s[i] == '1'){
                if(val == 1 || carry == 1){
                    ans.push_back('0');
                    carry = 1 ;
                }
                else{
                    ans.push_back(s[i]);
                }
                    
            }else{
                if(val == 1 || carry == 1){
                    ans.push_back('1');
                    carry = 0 ;
                }
                else{
                    ans.push_back(s[i]);
                }
            }
            val = 0 ;
        }
        if(carry == 1){
            ans.push_back('1');
        }
        int index = ans.length()-1 ;
        while(ans[index] == '0'){
            ans.pop_back();
            index -- ;
        }
        reverse(ans.begin(),ans.end());
        
        return ans ;
    }
};
