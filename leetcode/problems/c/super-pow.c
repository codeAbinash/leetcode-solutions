// by @codeAbinash
// Time : O(n)
// Space : O(1)

#define m 1337
#define phi_m 1140

int binExp(int a, int b) {
   int ans = 1;
   while (b) {
      if (b & 1) ans = (ans * a) % m;
      a = (a * 1LL * a) % m;
      b >>= 1;
   }
   return ans;
}

int superPow(int a, int* b, int bSize) {
   int bmod = 0;
   for (int i = 0; i < bSize; i++)
      bmod = (bmod * 10 + b[i]) % phi_m;
   return binExp(a, bmod);
}