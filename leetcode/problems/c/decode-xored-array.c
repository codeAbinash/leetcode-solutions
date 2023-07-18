// by @codeAbinash
// Time : O(n)
// Space : O(1)

int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
   int* arr = (int*)malloc(sizeof(int) * (encodedSize + 1));
   *returnSize = encodedSize + 1;
   arr[0] = first;
   for (int i = 0; i < encodedSize; i++)
      arr[i + 1] = arr[i] ^ encoded[i];
   return arr;
}