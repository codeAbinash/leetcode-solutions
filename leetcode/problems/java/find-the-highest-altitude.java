// by @codeAbinash
// Time : O(n)
// Space : O(1)

class Solution {
  public int largestAltitude(int[] gain) {
    int altitude = 0, maxAltitude = 0;
    for (int i = 0; i < gain.length; i++) {
      altitude += gain[i];
      maxAltitude = Math.max(maxAltitude, altitude);
    }
    return maxAltitude;
  }
}