class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();

        // Check first element (i didnt get this i know its used to handle edge case but still)
        if (n == 1 || nums[0] != nums[1])
            return nums[0];

        // Check middle elements
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }

        // Check last element
        return nums[n - 1];
    }
};
