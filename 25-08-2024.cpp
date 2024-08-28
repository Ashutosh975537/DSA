class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Your Code goes here.
        long long ans = 0 ;
        sort(brr.begin(),brr.end());
        int oneCount = 0 ;
        int twoCount = 0 ;
        int threeCount = 0 ;
        int fourCount = 0 ;
        for(int i = 0 ; i < brr.size() ;i++){
            if(brr[i] == 1)oneCount++ ;
            if(brr[i] == 2)twoCount++ ;
            if(brr[i] == 3)threeCount++ ;
            if(brr[i] == 4)fourCount++ ;
        }
        
        for(int i = 0 ; i < arr.size() ;i++){
                
                if(arr[i] == 1) continue ;
                int index = -1 ;
                int s = 0 ;
                int e = brr.size() -1 ;
                while(s <= e){
                    int mid = (s+e)/2 ;
                    if(brr[mid] > arr[i]){
                        index= mid ;
                        e = mid - 1 ;
                    }else{
                        s = mid + 1 ;
                    }
                }
                if(index != -1){
                    ans  += (brr.size() - index);
                    if(arr[i] == 2){
                        ans -= (threeCount + fourCount);
                    }
                    if(arr[i] == 3){
                        ans += twoCount ;
                    }
                }
                else if(index == -1 && arr[i] == 3){
                    ans += twoCount ;
                }
                //cout << i << "  " << ans << endl ;
        }
        //cout << ans << endl ;
        int count = 0 ;
        for(int i = 0 ; i < arr.size () ; i++){
            if(arr[i] == 1){
                count++ ;
            }
        }
        ans += oneCount*(arr.size()-count) ;
        return ans ;
    }
};
