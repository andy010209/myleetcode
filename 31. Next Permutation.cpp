class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1) return;
        int i=nums.size()-2;
        int p=nums.size()-1;
        int t=-1;
        int temp=100;
        while(nums[i]>=nums[i+1]){
            i--;
            if(i==-1) break;
        }
        if(i==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        while(p>i){
            if(nums[p]-nums[i]<temp&&nums[p]-nums[i]>0){
                t=p;
                temp=nums[p]-nums[i];
            }
            p--;
        }
        swap(nums[i],nums[t]);
        reverse(nums.begin()+i+1,nums.end());
        return;
    }
};