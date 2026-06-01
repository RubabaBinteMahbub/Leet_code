/*
যেকোনো সাধারণ sorting algorithm (ex. bubble sort)
এ সবসময় O(n^2) সময় লাগে।

তবে heap sort আর merge sort শুধু O(n logn) এর।

এই সমস্যার জন্য Heap Sort সবচেয়ে উপযুক্ত উত্তরগুলোর একটি।
কারণ LeetCode বলেছে:
Time: O(n log n)
Smallest space complexity possible
Built-in sort ব্যবহার করা যাবে না

Algorithm      Time        Extra Space
Merge Sort   O(n log n)        O(n)
Quick Sort   O(n log n) avg  O(log n)
             O(n²) worst     
Heap Sort     O(n log n)       O(1)
*/

class Solution {
public:
    void mergeSort(vector<int>& nums, int l, int r) {
        if (l >= r) return;

        int m = l + (r - l) / 2;

        mergeSort(nums, l, m);
        mergeSort(nums, m + 1, r);

        vector<int> temp;
        int i = l, j = m + 1;

        while (i <= m && j <= r) {
            if (nums[i] <= nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }

        while (i <= m) temp.push_back(nums[i++]);
        while (j <= r) temp.push_back(nums[j++]);

        for (int k = 0; k < temp.size(); k++) {
            nums[l + k] = temp[k];
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
