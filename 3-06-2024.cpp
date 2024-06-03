class Solution {
  public:
    #define mod 1000000007
    long long power(long long a ,long long b){
        long long ans = 1 ;
        while( b > 0){
            if(b & 1){
                ans = (ans * a) % mod ;
            }
            a = a*a ;
            a = a % mod ;
            b = b >> 1 ;
        }
        return ans ;
    }
    int numberOfConsecutiveOnes(int n) {
        // code here
        vector<int> a(n,0) ; //number of strings ending with Zero Not containing consecutive one.
        vector<int> b(n,0) ; //number of string ending with one Not containing consecutive one
        a[0] = 1 ;
        b[0] = 1 ;
        for(int i = 1 ; i < n ; i++){
            a[i] = (a[i-1] + b[i-1])%mod;
            b[i] = a[i-1]%mod;
        }
        int totalValid = (a[n-1]%mod + b[n-1]%mod)%mod ; //total strings that dont contain consecutive one
        
        return ((power(2,n) + mod  - totalValid)%mod) ; //total string - without consecutive one
    }
};

