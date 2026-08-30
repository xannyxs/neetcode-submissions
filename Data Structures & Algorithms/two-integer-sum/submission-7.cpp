class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> h = {};

        for (int i = 0; i < nums.size(); i += 1) {
            h[nums[i]] = i;
        }

        vector<int> v = {};
        for (int i = 0; i < nums.size(); i += 1) {
            int diff = target - nums[i];

            std::cout << diff << std::endl;
            std::cout << h[diff] << std::endl;
            if (h[diff] && h[diff] != i) {
                v.push_back(i);
                v.push_back(h.at(diff));
                return v;
            }
        }

        return v;
    }
};
