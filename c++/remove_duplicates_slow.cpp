#include <vector>
class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {
    std::vector<int> unique_nums;
    unique_nums.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] == nums[i - 1]) {
        nums.erase(nums.begin() + i);
        i--;
      }
    }

    return nums.size();
  }
};
