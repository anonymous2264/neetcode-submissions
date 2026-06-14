class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] <= nums[i-1]) {
                int target = nums[i-1] + 1;
                ans += target - nums[i];
                nums[i] = target;
            }
        }
        return ans;
    }
};