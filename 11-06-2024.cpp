class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        long long sum = 0 ;
        vector<pair<int,int>> vec ;
        for(int i = 0 ; i < n ; i++){
            vec.push_back(make_pair(abs(arr[i]-brr[i]),i));
        }
        sort(vec.begin(),vec.end());
        for(int i = n - 1 ; i >= 0 ; i-- ){
            int index = vec[i].second;
            if(arr[index] > brr[index]){
                if(x){
                    sum += arr[index] ;
                    x-- ;
                }else{
                    sum += brr[index] ;
                    y-- ;
                }
            }else{
                if(y){
                    sum += brr[index] ;
                    y-- ;
                }else{
                    sum += arr[index] ;
                    x-- ;
                }
            }
        }
        return sum ;
    }
};
