class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int k = -1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] < nums[j]) {
                    k = max(k, nums[j] - nums[i]);
                }
            }
        }
        return k;
    }
};