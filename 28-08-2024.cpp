class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    void reverse(vector<int> &vec , int i ,  int j){
        while(i < j){
            swap(vec[i++],vec[j--]);
        }
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        unordered_map<int,int> mp ;//num , frequency
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]] += 1 ;
        }
        priority_queue<pair<int,int>> pq ;
        for(auto it : mp){
            pq.push({it.second,it.first}) ;
        }
        unordered_map<int,int> freq ;//freq,index
        int last = INT_MAX ;
        vector<int> ans ;
        int i = 0 , j = 0 ;
        while(!(pq.empty())){
            //cout << pq.top().first << "    " << pq.top().second << endl ;
            if(pq.top().first < last){
               freq[pq.top().first] = ans.size() ;
               int count = pq.top().first ;
               while(count){
                    ans.push_back(pq.top().second) ;
                    count-- ;
               }
               last = pq.top().first ;
               pq.pop();
            }else{
                i = freq[pq.top().first] ;
                j = ans.size()-1 ;
               
               while(!(pq.empty()) && pq.top().first == last){
                   int count = pq.top().first ;
                       while(count){
                             ans.push_back(pq.top().second) ; 
                              j++ ;
                              count-- ;
                   }
                   pq.pop() ;
               }
               reverse(ans,i,j);
            }
            
            // for(auto it : ans){
            //     cout << it << "  " ;
            // }cout << endl ;
        }
        return ans ;
    }
};
