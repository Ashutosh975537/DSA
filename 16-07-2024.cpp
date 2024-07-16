// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        bool flag = false ;
        string ans = "";
        for(int i = 0 ; i < s.length() ;i++){
           if(flag){
               ans.push_back(s[i]);
           }
           if(s[i] == ch){
               count--;
               if(count == 0){
                   flag = true ;
               }
           }
           
        }
        return ans ;
    }
};
