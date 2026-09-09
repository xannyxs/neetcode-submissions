class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> h = {};
        
        for (int i = 0; i < nums.size(); i += 1) {
            h[nums[i]] = i;
        }


        for (int i = 0; i < nums.size(); i += 1) {
            int diff = target - nums[i];


            if (h[diff] && i != h[diff]) {
                return {i, h[diff]};
            }
        }

        return {};
    }
};
