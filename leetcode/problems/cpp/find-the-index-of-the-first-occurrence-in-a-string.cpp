// by @codeAntu
// time complexity: O(n)
// space complexity: O(1)


class Solution {
public:
   int strStr(string haystack, string needle) {
      int ind = 0;
      for (int i = 0; i < haystack.size(); i++){
         if (haystack[i] == needle[0]){
            ind = i;
            for (int j = 0; j < needle.size(); j++){
               if (haystack[ind] != needle[j]){
                  ind = 0;
                  break;
               }
               ind++;
            }
            if (ind != 0){
               return i;
            }  
         }
      }
      return -1;
   }
};