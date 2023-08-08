// by @codeAntu
// timecomplexity o(logn)
// spacecomplexity o(1)


int mySqrt(int x) {
   int high = x / 2 + 1, low = 0;
   long mid;

   while (high >= low)
   {
      mid = (high + low) / 2;
      cout << mid << endl;
      if (mid * mid == x)
         return mid;
      else if (mid * mid > x)
         high = mid - 1;
      else
         low = mid + 1;
   }
   return high;
}