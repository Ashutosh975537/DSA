// User function Template for C++
class Solution {
  public:                        //////////////////////////////////////////////
    #define mod 1000000007 
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        if(arr.size() == 1)return arr[0] ;
        int zeroCount = 0 ;
        int negativeCount = 0 ;
        int negativeIndex = -1 ;
        int maxNegative = -11 ;
        int n = arr.size() ;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] == 0){
                arr[i] = 1 ;
                zeroCount++ ;
            }else if(arr[i] < 0 ){
                if(arr[i] > maxNegative){
                    maxNegative = arr[i];
                    negativeIndex = i ;
                }
                arr[i] = -arr[i];
                negativeCount++;
                
            }
        }
        if(zeroCount == n || (zeroCount == (n-1) && negativeCount == 1))
           return 0 ;
        if(negativeCount & 1){
            arr[negativeIndex] = 1 ;
        }
        
        long long int ans = 1 ;
        for(int i = 0 ; i < n ; i++){
            ans = (ans*arr[i])%mod ;
        }
        return ans ; 
            
    }
};
