class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        while(j!=nums2.size()&&i!=nums1.size()){
            if(nums1[i]>=nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                j++;
            }
                
            else{
                if(i==nums1.size()-1) break;
                i++;
            }
        }
        
        if(j!=nums2.size()){
            while(j!=nums2.size()){
                nums1.push_back(nums2[j]);
                j++;
            }
        }
        
        if(nums1.size()==0){
            return 0;
        }
        else if(nums1.size()%2==0){
            double med;
            med=(nums1[nums1.size()/2-1]+nums1[nums1.size()/2])/2.0;
            return med;
        } 
        
        else if(nums1.size()%2==1){
            return nums1[nums1.size()/2];
        }
        return 0;
    }
};