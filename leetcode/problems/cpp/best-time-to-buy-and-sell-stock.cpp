// by @codeAntu 
// time complexcity o(n)
// space complexcity o(1)


int maxProfit(vector<int>& prices) {
      int n = prices.size();
      int maxnum = prices[n-1];
      int maxprofit = 0 ;
      for (int i = n - 1; i >= 0 ; i--)
      {
         if (prices[i] > maxnum)
            maxnum = prices[i];
         if(maxnum - prices[i] > maxprofit)
            maxprofit = maxnum - prices[i];

      }
      return maxprofit;
   }