// by @codeAbinash
// Time : O(n)
// Space : O(1)

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
   for (int i = 0;i < flowerbedSize;i++) {
      if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) {
         flowerbed[i] = 1;
         n--;
      }
   }
   return n <= 0;
}