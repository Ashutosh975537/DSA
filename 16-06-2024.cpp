class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
        vector<bool> primes(n+1,true);
        primes[0] = false ;
        primes[1] = false ;
        for(int i = 0 ; i <= n ; i++){
            if(primes[i]){
                for(int j = 2*i ; j <= n ; j= j + i){
                    primes[j] = false ;
                }
            }
        }
        int i = 0 ;
        int j = n ;
        while(i <= j){
            while(primes[i] == false)i++;
            while(primes[j] == false)j-- ;
            if(i <= j){
                if(i+j == n)return {i,j};
                else if(i+j < n)i++ ;
                else j-- ;
        }
        }
        return {-1,-1};
    }
};
