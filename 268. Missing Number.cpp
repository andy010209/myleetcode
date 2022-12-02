class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int m;
        if(nums[l]!=0) return 0;
        if(nums[r]!=nums.size()) return nums.size(); 
        while(r>l){
            m=(r+l)/2;
            if(nums[m]==nums[m+1]-2) return nums[m]+1;
            if(nums[m]==nums[m-1]+2) return nums[m]-1;
            if(nums[r]-nums[m]==r-m){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return -1;
    }
};