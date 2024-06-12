class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int cnt = 0 ;
        while(n > 3){
            int temp = n ;
            while(temp > 3){
                int r = temp % 10 ;
                temp = temp/10 ;
                if(r == 4){
                    cnt++;
                    break;
                }
            }
            n--;
        }
        return cnt ;
    }
};
