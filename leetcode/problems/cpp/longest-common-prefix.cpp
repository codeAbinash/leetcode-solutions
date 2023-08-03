// by @codeAntu

string longestCommonPrefix(vector<string>& strs) {
      string tmp = "" , result = strs[0];

      for (int i = 1; i < strs.size(); i++)
      {
         tmp = "";
         for (int j = 0; j < strs[i].length() || j < result.length(); j++)
         {
            if (result[j] != strs[i][j])
            {
               break;
            }
            tmp += (strs[0][j]);
         }
         result = tmp;
      }
      return result;
   }