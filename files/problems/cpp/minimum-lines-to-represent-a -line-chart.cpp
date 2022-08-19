/*Minimum Lines to Represent a Line Chart */

/* Time complexity O(nlog(n))
   Space Complexity O(1)   */
   
   
//       @aakash172

class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        int n=stockPrices.size();
        
        // sort the vector so we get days in increasing order
        sort(stockPrices.begin(),stockPrices.end());
        int ans=0;
        for(int i=0;i<n-2;i++){
            //get coordinate of three point
            long x1=stockPrices[i][0],y1=stockPrices[i][1];
            long x2=stockPrices[i+1][0],y2=stockPrices[i+1][1];
            long x3=stockPrices[i+2][0],y3=stockPrices[i+2][1];
            if((x3-x2)*(y2-y1)==(y3-y2)*(x2-x1)){
                //slope of two line is equal increament the ans
                ans++;
            }
        }
        // n-1 lines are possible from n points
        //subtract ans from n-1 as they are identical line
        return n-1-ans;
    }
};