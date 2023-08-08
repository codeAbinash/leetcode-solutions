// by @codeAbinash
// Time : O(n)
// Space : O(1)

class Solution {
   public int[] decode(int[] encoded, int first) {
      int size = encoded.length;
      int[] result = new int[size + 1];
      result[0] = first;
      for (int i = 0; i < size; i++)
         result[i + 1] = result[i] ^ encoded[i];
      return result;
   }
}