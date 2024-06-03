class Solution {
  public int appendCharacters(String s, String t) {
    int si = 0, ti = 0;
    int sLen = s.length(), tLen = t.length();

    while (si < sLen && ti < tLen) {
      if (s.charAt(si) == t.charAt(ti))
        ti++;
      si++;
    }
    return tLen - ti;
  }
}