class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int y=1;
        if(nums.size()==1) return 1;
        for(int x=1;x<nums.size();x++){
            if(nums[x]!=nums[x-1]){
                nums[y]=nums[x];
                y++;
            }
        }
        return y--;
    }
};