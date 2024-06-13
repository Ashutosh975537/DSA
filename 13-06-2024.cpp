class Solution
{
    #define mod 1000000007
    public:
    int padovanSequence(int n)
    {
       //code here
       if(n < 3)return 1 ;
       int curr = 0 ;
       int pre = 1 ;
       int next= 1 ;
       int nextNext = 1 ;
       for(int i = 3 ; i <= n ; i++){
           curr = (pre + next)%mod ;
           pre = next ;
           next = nextNext ;
           nextNext = curr ;
       }
       return curr ;
       
    }
    
};
