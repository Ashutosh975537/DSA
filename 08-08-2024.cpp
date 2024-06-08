class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        int i = 0 ;
        int j = n - 1 ;
        while(i < j){
            int mid = (i+j)/2 ;
            if(arr1[mid] == arr2[mid]){
                i = mid + 1 ;
            }else{
                j = mid ;
            }
        }
        return i ;
    }
};
