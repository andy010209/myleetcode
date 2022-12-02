class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==4){
            if((long long)nums[0]+nums[1]+nums[2]+nums[3]==target){
                vector<int> t;
                vector<vector<int>> tt;
                t.push_back(nums[0]);
                t.push_back(nums[1]);
                t.push_back(nums[2]);
                t.push_back(nums[3]);
                tt.push_back(t);
                return tt;
            }
            else{
                vector<vector<int>> x;
                return x;
            }
        }
        vector<vector<int>> fs;
        for(int i=0;i<n-3;i++){
            if(i>0&&nums[i-1]==nums[i]) continue;
            for(int l=n-1;l>i+2;l--){
                if(l<n-1&&nums[l+1]==nums[l]) continue;
                int j=i+1;
                int k=l-1;
                while(j<k){
                if((long long)nums[i]+nums[j]+nums[k]+nums[l]==target){
                    vector<int> ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                    ans.push_back(nums[l]);
                    fs.push_back(ans);
                    k--;
                    j++;
                    while((long long)nums[k]==nums[k+1]&&nums[j]==nums[j-1]&&j<k){
                        k--;
                        j++;
                    }
                    continue;
                    }
                
                else if((long long)nums[i]+nums[j]+nums[k]+nums[l]>target){
                    k--;
                }
                else{
                    j++;
                }
                }
            }
        }
        return fs;
    }
};