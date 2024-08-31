class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        vector<int> ketqua; 
        for (i = 0; i < nums.size() - 1; i++) {
            for (j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ketqua.push_back(i);
                    ketqua.push_back(j);
                    break;
                }
            } 
        }
        return ketqua; 
    }    
};
