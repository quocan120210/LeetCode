class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for (int i = 0; i < nums.size(); i++) {
            int diff = -nums[i] + target;
            if (umap.find(diff) == umap.end()) {
                umap[nums[i]] = i;
            } else {
                return {umap[diff], i};
            }
        }
        return {};
    }
};