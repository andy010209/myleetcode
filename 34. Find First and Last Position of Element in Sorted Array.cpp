class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans{-1,-1};
        int b=0;
        int e=nums.size()-1;
        int m;
        if(e==-1) return ans;
        if(nums[b]==target) ans[0]=b;
        if(nums[e]==target) ans[1]=e;
        if(ans[0]==b&&ans[1]==e) return ans;
        if(ans[0]!=b){
        while(e>=b){
            m=(b+e)/2;
            if(nums[m]==target&&nums[m-1]!=target){
                ans[0]=m;
                break;
            }
            if(nums[m]>=target){
                e=m-1;
            }
            else{
                b=m+1;
            }
        }
        }
        b=0;
        e=nums.size()-1;
        if(ans[1]!=e){
        while(e>=b){
            m=(b+e)/2;
            if(nums[m]==target&&nums[m+1]!=target){
                ans[1]=m;
                break;
            }
            if(nums[m]<=target){
                b=m+1;
            }
            else{
                e=m-1;
            }
        }
        }
        return ans;
    }
};