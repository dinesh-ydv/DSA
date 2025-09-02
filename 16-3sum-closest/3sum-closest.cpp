class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];

        int n = nums.size();

        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1, right = n - 1;
            while (left < right) {
                int curr_sum = nums[i] + nums[left] + nums[right];
                if (abs(curr_sum - target) < abs(closest - target)) {
                    closest = curr_sum;
                }
                if (curr_sum < target) {
                    ++left;
                } else if (curr_sum > target) {
                    --right;
                } else {
                    return curr_sum; 
                }
            }
        }
        return closest;
    }
};
