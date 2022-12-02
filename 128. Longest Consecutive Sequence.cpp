class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int ans=0;
        int t=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1) t++;
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                if(ans<t)
                    ans=t;
                t=1;
            }
        }
        if(ans<t) ans=t;
        return ans;
    }
};