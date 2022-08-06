class Solution {
    public List<String> letterCasePermutation(String s) {
        LinkedList<String> answer = new LinkedList<>();
        answer.add(s);
        int n = s.length();
        for(int i = n - 1; i >= 0; i--) {
            char c = s.charAt(i);
            if(Character.isLetter(c)) {
                int len = answer.size();
                while(len-- > 0) {
                    String str = answer.poll();
                    String left = str.substring(0, i);
                    String right = str.substring(i + 1, n);
                    answer.add(left + Character.toLowerCase(c) + right);
                    answer.add(left + Character.toUpperCase(c) + right);

                }
            }
        }   
        return answer;
    }
}