class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int x : nums) {
            mpp[x]++;
        }

        int ans = 0;

        for(auto it : mpp) {
            int num = it.first;

            if(mpp.find(num + 1) != mpp.end()) {
                ans = max(ans, mpp[num] + mpp[num + 1]);
            }
        }

        return ans;
    }
};