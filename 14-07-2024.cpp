// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int i = 0 ,j = arr.size()-1 ;
        while(i < j){
            if(arr[i] == 0)i++;
            if(arr[j] == 1)j--;
            if(i < j){
                swap(arr[i],arr[j]);
            }
        }
        
    }
};
