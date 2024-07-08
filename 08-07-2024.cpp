class Solution {
  public:
    int binarySearch(vector<int> &arr,int s ,int e,int key){
        while(s <= e){
            int m = (s+e)/2 ;
            if(arr[m] == key)
                return m ;
                
            if(arr[m] > key){
                e = m - 1 ;
            }
            else{
                s = m + 1 ;
            }
        }
        return -1 ;
    }
    int search(vector<int>& arr, int key) {
        // complete the function here
        int pivotIndex = -1 ;
        if(arr[arr.size() -1] >= arr[0]){
            return binarySearch(arr,0,arr.size()-1,key) ;
        }
        int s = 0 , e = arr.size() - 1 ;
        while(s < e){
            int mid = (s + e)/2 ;
            if(arr[mid] > arr[0]){
                s = mid + 1;
            }else{
                e = mid  ;
            }
        }
        if(s == 0)
           pivotIndex = 0 ;
        else 
           pivotIndex = s - 1 ;
      
        if(arr[0] <= key && arr[pivotIndex] >= key){
    
            return binarySearch(arr,0,pivotIndex,key);
        }else{
           
            return binarySearch(arr,pivotIndex+1,arr.size()-1,key);
        }
    }
};
