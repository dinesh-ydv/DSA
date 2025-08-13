class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int maxCount = INT_MIN;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                count++;
                maxCount = max(maxCount, count);
            }else{
                count = 0;
            }
        }
        return max(maxCount, count);
    }
};