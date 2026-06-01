// Bubble sort TC : O(n^2)
// needed O(n logn) heap sort→O(n logn) time, O(1) space complexity.

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      int n = nums.size();
      for(int i=0; i<n-1; i++){
        int swapped = 0;
        for(int j=0; j<n-1-i; j++){
           if(nums[j]>nums[j+1]){
              swap(nums[j], nums[j+1]);
              swapped = 1;
            }
         }
        if(swapped == 0) break;
      }
      return nums;
    }
};
