class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int max) {

        // Your code here
        int arr[max+2] = {0} ;
        for(int i = 0 ; i < n ; i++){
            arr[l[i]]++;
            arr[r[i] + 1]--;
        }
        for(int i = 1 ; i <= max ;i++){
            arr[i] = arr[i-1]+arr[i];
        }
        int ans = -1 ;
        int cnt = -1 ;
        for(int i = 0 ; i <= max ;i++){
            if(arr[i] > cnt){
                ans = i ;
                cnt = arr[i] ;
            }
        }
        return ans ;
    }
};
