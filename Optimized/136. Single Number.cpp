class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_res = 0;
      
				for(int x : nums){
   				xor_res^=x;
				}
		  return xor_res;
    }
};

/*
map দিয়ে frequency count দিয়ে করলে SC O(n) হয়ে
যায়। কিন্তু xor এর বৈশিষ্ট্য ব্যবহার করলে O(1) এই করা যায়।

a ^ a = 0
a ^ 0 = a

[4,1,2,1,2] array হলে,

4 ^ 1 ^ 2 ^ 1 ^ 2
= 4 ^ (1 ^ 1) ^ (2 ^ 2)
= 4 ^ 0 ^ 0
= 4
*/
