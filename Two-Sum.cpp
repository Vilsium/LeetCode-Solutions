class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int rem = target - num;
            if (mpp.find(rem) != mpp.end()) {
                ans.push_back(mpp[rem]);
                ans.push_back(i);
                break;
            }
            mpp[num] = i;
        }
        return ans;
    }
};
