class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int c=nums[0];
        for(int i=1,a=c,b=c;i<nums.size();i++){
            if(nums[i]<0) swap(b,a);
            a=max(nums[i],a*nums[i]);
            b=min(nums[i],b*nums[i]);
            
            c=max(c,a);
        }
        return c;
    }
};