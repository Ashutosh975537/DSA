    int swapNibbles(int n) {
        // code here
        int cnt = 0 ;
        while(cnt < 4){
            int bit = n & 1 ;
            n = n >> 1 ;
            bit = bit << 7 ; // bit = bit*128
            n = n | bit ;
            cnt++;
        }
        return n ;
    }
