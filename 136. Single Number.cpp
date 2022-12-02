class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        int c=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]&&c==1) return nums[i-1];
            else{
                if(nums[i]>nums[i-1]&&c==2) c=1;
                if(nums[i]==nums[i-1] ) c++;
            }
        }
        return nums[nums.size()-1];
    }
};