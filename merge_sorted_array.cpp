#include <algorithm>
#include <vector>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (nums1.size() != m + n) {
            return;
        } else if (nums2.size() != n) {
            return;
        } else if (m < 0) {
            return;
        } else if (n > 200) {
            return;
        } else if ((m + n) < 1 || (m + n) > 200) {
            return;
        }

        bool first_zero = false;
        int count = 0;
        // merge arrays
        for (int i = m; i < nums1.size(); i++) {
            if (nums1[i] == 0 && !first_zero) {
                nums1[i] = nums2[count++];
                first_zero = true;
            } else if (nums1[i] == 0) {
                nums1[i] = nums2[count++];
            } else {
                // something fucked up happened
                return;
            }
        }

        std::sort(nums1.begin(), nums1.end());
    }
};
