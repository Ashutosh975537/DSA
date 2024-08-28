class Solution {
  public:
    /*You are required to complete this method *//////////////////////////////////////
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        stack<int> st ;
        st.push(0);
        vector<int> leftMin ;
        vector<int> rightMin ;
        for(int i = 0 ; i < arr.size() ;i++){
            while(st.top() >= arr[i]){
                st.pop() ;
            }
            leftMin.push_back(st.top());
            st.push(arr[i]);
        }
        while(st.size())st.pop();
        st.push(0);
        for(int i = arr.size()-1 ; i >= 0 ;i--){
            while(st.top() >= arr[i]){
                st.pop() ;
            }
            rightMin.push_back(st.top());
            st.push(arr[i]);
        }
        int ans = INT_MIN ;
        reverse(rightMin.begin() ,rightMin.end());
        for(int i = 0 ; i < arr.size() ;i++){
            ans = max(ans,abs(leftMin[i]-rightMin[i]));
        }
        return ans ;
    }
};
