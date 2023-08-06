
// by @codeAntu
// time complexcity o(n)
// spac complexcity o(1)

int climbStairs(int n) {
   int first = 1, secound = 1, temp;
   for (int i = 0; i < n - 1; i++)
   {
      temp = secound;
      secound = first + secound;
      first = temp;
   }
   return secound;
}

// with recursion

// int climbStairs(int n) {

//    return fibo(1, 1, n);

// }

// int fibo(int a, int b, int n) {
//    if (n == 1)
//       return 1;
//    return a + fibo(b, a + b, --n);
// }
