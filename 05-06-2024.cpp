class Solution {

  public:
    int findPivot(int arr[],int start,int end){
        int pivot = arr[start];
        int pivotIndex = start ;
        for(int i = start + 1 ; i <= end ;i++){
            if(pivot >= arr[i]){
                pivotIndex++;
            }
        }
        swap(arr[start],arr[pivotIndex]) ;
        while(start < pivotIndex && end > pivotIndex){
            while(arr[start] <= arr[pivotIndex])
                start++ ;
            while(arr[end] > arr[pivotIndex])
                 end-- ;
            if(start < pivotIndex && end > pivotIndex){
                swap(arr[start],arr[end]) ;
            }
        }
        return pivotIndex ;
    }
  
    void quickSort(int arr[],int start,int end){
        if(start >= end)return ;
        int partition = findPivot(arr,start, end );
        quickSort(arr,start, partition - 1);
        quickSort(arr, partition + 1,end);
    }
    
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        quickSort(a,0,n-1);
        quickSort(b,0,m-1);
        long long sumOne = 0 ;
        long long sumTwo = 0 ;
        for(int i = 0 ; i < n ;i++)
            sumOne += a[i];
        
        for(int i = 0 ; i < m ;i++)
            sumTwo += b[i] ;
            
            
            
        for(int i = 0 ; i < n ; i++){
            int tempOne = sumOne - a[i] ;
            int tempTwo = sumTwo + a[i] ;
            int s = 0 ;
            int e = m - 1 ;
            while(s <= e){
                int mid = (s + e)/2;
                if(tempOne + b[mid] == tempTwo - b[mid]){
                    return true ;
                }
                else if(tempOne + b[mid] > tempTwo - b[mid]){
                    e = mid - 1 ;
                }
                else{
                    s = mid + 1 ;
                }
            }
        }
        return -1 ;
    }
};
