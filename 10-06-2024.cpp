class Solution {
  public:
    void mapping(char nuts[] , int n){
    for(int i = 0 ; i < n ; i++){
            if(nuts[i] == '!'){
                nuts[i] = '0';
            }
            
            else if(nuts[i] == '#'){
                nuts[i] = '1';
            }
            else if(nuts[i] == '$'){
                nuts[i] = '2';
            }
            
            else if(nuts[i] == '%'){
                nuts[i] = '3';
            }
            else if(nuts[i] == '&'){
                nuts[i] = '4';
            }
            else if(nuts[i] == '*'){
                nuts[i] = '5';
            }
            else if(nuts[i] == '?'){
                nuts[i] = '6';
            }
            else if(nuts[i] == '@'){
                nuts[i] = '7';
            }
            else if(nuts[i] == '^'){
                nuts[i] = '8';
            }
        }
    }
    void unmapping(char nuts[],int n ){
         for(int i = 0 ; i < n ; i++){
            if(nuts[i] == '0'){
                nuts[i] = '!';
            }
            
            else if(nuts[i] == '1'){
                nuts[i] = '#';
            }
            else if(nuts[i] == '2'){
                nuts[i] = '$';
            }
            
            else if(nuts[i] == '3'){
                nuts[i] = '%';
            }
            else if(nuts[i] == '4'){
                nuts[i] = '&';
            }
            else if(nuts[i] == '5'){
                nuts[i] = '*';
            }
            else if(nuts[i] == '6'){
                nuts[i] = '?';
            }
            else if(nuts[i] == '7'){
                nuts[i] = '@';
            }
            else if(nuts[i] == '8'){
                nuts[i] = '^';
            }
        }   
    }
    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        mapping(nuts,n);
        mapping(bolts,n);
        sort(nuts,nuts+n);
        sort(bolts,bolts+n);
        unmapping(nuts,n);
        unmapping(bolts,n);
    }
};
