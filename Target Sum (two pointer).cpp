class Solution {
public:
    int search(vector<int> &nums, int target) {
        int l=0, r=nums.size(), m;
        while(l<r){
        m=(l+r)/2;
        if(nums[m]==targrt) return m;
        else if(target>nums[m]) l=m+1;
        else if(target<nums[m]) r=m-1;
        }
    return -1;
    }
};
