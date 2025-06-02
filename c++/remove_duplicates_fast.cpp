#include <vector>
class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {
    std::vector<int> unique_nums;
    unique_nums.push_back(nums[0]);
    int last_num = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] > last_num) {
        unique_nums.push_back(nums[i]);
      }
      last_num = nums[i];
    }
    nums = unique_nums;
    return nums.size();
  }
};
