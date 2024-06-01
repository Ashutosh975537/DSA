class Solution {
  public:
    string oddEven(string s) {
        // code here
        vector<int> count(27,0);
        for(int i =  0  ; i <  s.length() ; i++){
            
            int index = s[i] - 'a' + 1 ;
            count[index]++;
        }
        int x = 0 ;
        int y = 0 ;
        for(int i = 1 ; i < 27 ; i++){
            
            if( count[i] && (i & 1) && (count[i] & 1) ){
                y = y + 1 ;
            }
            if(count[i] && (!(i & 1))  && !(count[i] & 1)){
                x = x + 1 ;
            }
        }
        if( (x + y) % 2 == 0){
            return "EVEN";
        }
        else{
            return "ODD";
        }
    }
};
//spacecomplexity is 27*4 (sizeofvector*sizeofint) that is constant 
//time Complexity o(|s|) where s is the length of the string
