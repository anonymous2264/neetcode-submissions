class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int ones=0;
        int maxi=INT_MIN;
        vector<int> val(2*n);
        for(int i=0;i<2*n;i++)
        {
            val[i]=nums[i%n];
        }
        int win=accumulate(nums.begin(),nums.end(),0);
        int i=0;
        int j=0;
        while(j < 2*n)
        {
            if(val[j]==1)
            {
                ones++;
            }
            if(j-i+1 > win)
            {
                ones-=val[i];
                i++;
            }
            maxi=max(maxi,ones);
            j++;
        }
        return win-maxi;
    }
};