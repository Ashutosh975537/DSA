// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int d = INT_MAX ;
        int ans = INT_MIN ;
        int n = arr.size();
        for(int i = 0 ; i < n - 2; i ++){
            int s =  i + 1 ;
            int e = n - 1 ;
            while(s < e){
                int sum = (arr[i] + arr[s] + arr[e]);
                if(sum == target)return sum ;
                if(abs(target - sum ) <= d){
                    if(abs(target-sum) < d){
                        ans = sum ;
                        d = abs(target - sum);
                    }else{
                        ans = max(ans,sum);
                    }
                   
                }
                if(sum == target){
                    return target;
                } else if(sum > target)
                   e -- ;
                 else 
                    s++ ;
                   
                
        }
        }
        return ans ;
    }
};
