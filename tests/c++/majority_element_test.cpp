#include <gtest/gtest.h>
#include "../../c++/majority_element.cpp"

TEST(MajorityElementTest, HandlesBasicCase) {
    Solution s;
    std::vector<int> nums = {3,2,3};
    ASSERT_EQ(s.majorityElement(nums), 3);
}

TEST(MajorityElementTest, HandlesEmptyInput) {
    Solution s;
    std::vector<int> nums;
    ASSERT_THROW(s.majorityElement(nums), std::invalid_argument);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
