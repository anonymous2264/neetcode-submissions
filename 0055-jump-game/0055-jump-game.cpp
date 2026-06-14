class Solution {
public:
    bool canJump(vector<int>& nums) {
        //greedy intuition
        int n=nums.size();
       int maxidx=0;
        for(int i=0;i<n;i++)
        {
            if(i>maxidx)
            return false;
            else
            {
                maxidx=max(maxidx,i+nums[i]);
            }
        }
        return true;
    }
};