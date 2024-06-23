class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        stack<int> st ;
        vector<int> ans ;
        int nextIndex = 1 ;
        for(int i = 0 ; i < str.length() ; i++){
            if(str[i] == '('){
               st.push(nextIndex);
               ans.push_back(nextIndex++) ;
            }
            if(str[i] == ')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans ;
    }
};
