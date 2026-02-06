class Solution {
public:
  int peakIndexInMountainArray(vector<int>& arr) {
      int i,maxIndex=0;
      for(i=0; i<arr.size(); i++){
      if(arr[i]>arr[maxIndex]) maxIndex=i;
      }
    return maxIndex;
  }
};

// Complexity : O(n)
// Needed : O(log n) (binary search)
