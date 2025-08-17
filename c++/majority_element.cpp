#include <map>
#include <stdexcept>
#include <vector>

class Solution {
public:
  int majorityElement(std::vector<int> &nums) {
    if (nums.empty()) {
      throw std::invalid_argument("Input vector cannot be empty");
    }
    int n = nums.size();
    int greatest = 0;
    int return_num = 0;
    std::map<int, int> num_map;

    for (int i = 0; i < n; i++) {
      if (num_map.count(nums[i]) == 0) {
        num_map.insert({nums[i], 1});
      } else {
        num_map[nums[i]]++;
      }
      if (num_map[nums[i]] > greatest) {
        greatest = num_map[nums[i]];
        return_num = nums[i];
      }
    }
    return return_num;
  }
};
