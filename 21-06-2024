class Solution {
  public:
  
    string compareFrac(string str) {

        // Code here 
        vector<int> fraction(4,0);
        int index = 0 ;
        int sepIndex = -1 ;
        for(int i = 0 ; i < str.length() ; i++){
            if(str[i] == ' ') {
                sepIndex = i ;
                continue ;
                
            }
            if(str[i] == '/' || str[i] == ','){
                index++;
            }else{
                
                fraction[index] = fraction[index]*10 + (str[i] - '0');
            }
        }
        float first = (float)fraction[0]/fraction[1];
        float second = (float)fraction[2]/fraction[3];
        string ans = "";
        if(first == second) return "equal";
        else{
            if(first > second){
                for(int i = 0 ; i < sepIndex - 1; i++){
                    ans += str[i];
                }
            }
               
            else {
                for(int i = sepIndex + 1 ; i < str.length() ; i++){
                    ans += str[i] ;
                }
            }
                
        }
        return ans ;
    }
};
