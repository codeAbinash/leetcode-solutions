/*first unique character in a string */

/* Time complexity O(n)
   Space Complexity O(26)   */
   
   
//       @aakash172



class Solution {
public:
    int firstUniqChar(string s) {
        
        // make a map to store index of character
       unordered_map<char,int>mp;
       
        
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                // if character is not present in map then set value equal to index
                mp[s[i]]=i;
            }
            else{
                // if character is present in map then set value equal to INT_MAX
                mp[s[i]]=INT_MAX;
            }
        }
       
        
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]!=INT_MAX){
                /* if value corresponding to character is not equal to INT_MAX then we got  
				  first non repeating charcter     */
                return mp[s[i]];
            }
        }
        
        //if we didn't get any repeating character then return -1
        return -1;
    }
};
