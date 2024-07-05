//Back-end complete function Template for C++
class Solution {
  public:
    // Function to find the vertical width of a Binary Tree..........................
    void solve(Node*root,int left,int right,int &leftMin,int &rightMax){
        if(root == NULL)
           return ;
          
         leftMin = min(left,leftMin);
         rightMax = max(right,rightMax);
         solve(root -> left,left-1,right-1,leftMin,rightMax);
         solve(root -> right,left+1,right+1,leftMin,rightMax);
    }
    
    int verticalWidth(Node* root) {
        // code here
        if(root == NULL)return 0 ;
        int leftLeftMin = 0 ;
        int leftRightMax = 0 ;
        int rightLeftMin = 0 ;
        int rightRightMax = 0 ;
        solve(root -> left,-1,-1,leftLeftMin,leftRightMax);
        solve(root-> right,1,1,rightLeftMin,rightRightMax);
        return ((max(leftRightMax,rightRightMax))-(min(leftLeftMin,rightLeftMin)) + 1);
    }
};
