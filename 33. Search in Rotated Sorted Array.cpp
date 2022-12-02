class Solution {
public:
    int search(vector<int>& nums, int target) {
        int b=0;
        int e=nums.size()-1;
        int m;
        if(nums.size()==1){
            if(nums[0]==target) return 0;
            else return -1;
        }
        while(e>=b){
            m=(b+e)/2;
            if(nums[m]==target) return m;
            if(nums[m]>=nums[b]){
                if(target>=nums[b]&&target<=nums[m]){
                    e=m-1;
                }
                else{
                    b=m+1;
                }
            }
            else{
                if(target>=nums[m]&&target<=nums[e]){
                    b=m+1;
                }
                else{
                    e=m-1;
                }
            }
            
        }
        return -1;
    }
};