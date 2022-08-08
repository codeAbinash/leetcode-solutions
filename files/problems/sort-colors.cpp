class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lastB=-1,lastW=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(lastB==-1 && nums[i]==2){
                lastB=i;
            }
            else if(lastB!=-1 && nums[i]!=2){
                    swap(nums[lastB],nums[i]);
                    lastB += 1;
            }
        }
        for(int i=0;i<n;i++){
            if(i==lastB){
                break;
            }
            if(lastW==-1 && nums[i]==1){
                lastW=i;
            }
            else if(lastW!=-1 && nums[i]!=1){
                    swap(nums[lastW],nums[i]);
                    lastW += 1;
            }
        }
        return;
    }
};
