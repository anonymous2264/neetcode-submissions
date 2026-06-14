class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int>ans;
        int maxh=0;
        for(int i=heights.size()-1;i>=0;i--)
        {
            if(heights[i]>maxh)
            {
                ans.push_back(i);
                maxh=heights[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};