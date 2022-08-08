// @abhie9336

// Time: O(m+n)
// Space: O(m+n)


class Solution {
    public String addStrings(String num1, String num2) {
       StringBuilder sb = new StringBuilder();
        int i = num1.length()-1, j=num2.length()-1;
        int carry=0;
        while(i>=0 || j>=0 || carry>0){
            int n1=0, n2=0;
            if(i>=0) n1 = num1.charAt(i)-'0';
            if(j>=0) n2 = num2.charAt(j)-'0';
            
            int sum = n1 + n2+ carry;
            carry= sum/10;
            sb.append(sum%10);
            i--;
            j--;
        }
        return sb.reverse().toString();
    }
}