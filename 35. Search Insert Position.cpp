class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int b=0;
        int e=nums.size()-1;
        int m;
        if(target<nums[b]) return 0;
        if(target>nums[e]) return nums.size();
        while(1){
            if(nums[b]==target) return b;
            if(nums[e]==target) return e;
            m=(e+b)/2;
            if(nums[m]==target) return m;
            else if(e==b+1&&nums[b]!=target&&nums[e]!=target){
                return e;
            }
            if(target>nums[m]){
                b=m;   
            }
            else{
                e=m;
            }
        }
    }
};