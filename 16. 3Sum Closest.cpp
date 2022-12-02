class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,l,r;
        int s,t;
        t=nums[0]+nums[1]+nums[2];
        for(i=0;i<nums.size()-2;i++){
            l=i+1;
            r=nums.size()-1;
            while(r>l){
                s=nums[i]+nums[l]+nums[r];
                if(s==target){
                    return s;
                }
                if(abs(s-target)<abs(t-target)){
                    t=s;
                }
                if(s>target){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return t;
    }
};