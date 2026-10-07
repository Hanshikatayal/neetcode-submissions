class Solution {
private:
    int solve(vector<int>& nums, int index, vector<int>& dp) {
        if (index >= nums.size()) return 0;
        if (dp[index] != -1) return dp[index];

        int rob = nums[index] + solve(nums, index + 2, dp);
        int skip = solve(nums, index + 1, dp);
        return dp[index] = max(rob, skip);
    }

public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(nums, 0, dp);
    }
};
