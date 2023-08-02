// by @codeAbinash
// Time : O(n)
// Space : O(1)

bool lemonadeChange(int* bills, int billsSize) {
   int ten = 0, five = 0;
   for (int i = 0; i < billsSize; i++) {
      if (bills[i] == 5) five++;
      else if (bills[i] == 10) five--, ten++;
      else if (ten > 0) ten--, five--;
      else five -= 3;
      if (five < 0) return false;
   }
   return true;
}