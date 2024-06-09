
class Solution {
  public:
    void zigZag(int n, vector<int> &arr) {
        // code here
        if(n == 1){
            return ;
        }
        int i = 1 ;
        while(i < n){
            if(arr[i-1] > arr[i]){
                swap(arr[i-1],arr[i]);
            }
            if(i + 1 < n && arr[i+1] > arr[i]){
                swap(arr[i+1],arr[i]);
        }
        i = i + 2;
    }
    }
};
