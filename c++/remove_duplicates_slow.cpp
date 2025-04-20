class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> unique_nums;
        unique_nums.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }

        return nums.size();
    }
};
