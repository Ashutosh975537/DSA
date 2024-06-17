class Solution {
  public:
    // 0 not found 
    // 1 represent true 
    //-1 represent false
    pair<float,int> findSlope(int p1[] , int q1[],int p2[],int q2[]){
        if(p1[0] - q1[0] == 0){
            int x = p1[0]; 
            if(!(x >= min(p2[0],q2[0])) || !(x <= max(p2[0],q2[0])))
              return make_pair(-1,-1);
            if(p2[0] - q2[0] == 0)
               return make_pair(-1,-1);
           float slope = float(q2[1] - p2[1])/float(q2[0]-p2[0]);
           float y = float(slope*((float)(x - p1[0])) + p1[1]);
           if(y >= min(p1[1],q1[1]) && y <= max(p1[1],q1[1]))
              return make_pair(1,1);
        } else {
           float slope = float(q1[1] - p1[1])/float(q1[0]-p1[0]);
           return make_pair(slope,0);
        }
    }
    
    float findIntercept(float m , int p[]){
        return ((float)p[1] - m*(float)p[0]);
    }
    
    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        pair<float,int> mOne = findSlope(p1,q1,p2,q2);
        if(mOne.second != 0){
            if(mOne.second == -1)
            return "false";
            else{
                return "true" ;
            }
        }
        pair<float,int>  mTwo = findSlope(p2,q2,p1,q1);
        if(mTwo.second != 0){
            if(mTwo.second == -1)
            return "false";
            else{
                return "true";
            }
        }
        float m1 = mOne.first ;
        float m2 = mTwo.first ;
        if(m1 == m2)return "false" ;
        float cOne = findIntercept(m1,p1);
        float cTwo = findIntercept(m2,p2);
        float x = (cTwo - cOne)/(m1 - m2) ;
        float y = x*m1 + cOne;
        if((x >= (float)min(p1[0],q1[0]) && x <= (float)max(p1[0],q1[0]) && y >= (float)min(p1[1],q1[1]) && y <= (float)max(p1[1] ,q1[1])) && ((x >= (float)min(p2[0],q2[0]) && x <= (float)max(p2[0],q2[0]) && y >= (float)min(p2[1],q2[1]) && y <= (float)max(p2[1] ,q2[1]))))
           return "true";
        else 
          return "false" ;
    }
};
