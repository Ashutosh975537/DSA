// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum = 0 ;
        int temp = n ;
        while(n){
            int r = n % 10 ;
            n = n / 10 ;
            sum = sum + (r*r*r) ;
            
        }
        //sum == temp ? return "Yes" : return "No";
        if(sum == temp) return "Yes";
        else return "No";
   
   
    }
};
