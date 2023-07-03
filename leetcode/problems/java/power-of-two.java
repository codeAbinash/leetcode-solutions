class Solution {
    public boolean isPowerOfTwo(int n) {
       return n>0 && (n&(n-1))==0; // bitwise AND operator ex: if n = 16, then 16 & 15 = 0;
    }
}