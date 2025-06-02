#include <vector>
class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {
    int dup_count = 0;
    int last_num = nums[0];
    std::vector<int> unique_nums;
    unique_nums.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] == last_num) {
        dup_count += 1;
        if (dup_count <= 1) {
          unique_nums.push_back(nums[i]);
        }
      } else {
        unique_nums.push_back(nums[i]);
        dup_count = 0;
      }
      last_num = nums[i];
    }
    nums = unique_nums;
    return nums.size();
  }
};
