class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> h = {};
        vector<vector<int>> freq(nums.size() + 1);
        for (auto num : nums) {
            h[num] += 1;
        }
        for (const auto& e: h) {
            freq[e.second].push_back(e.first);
        }

        vector<int> result = {};
        for (int i = freq.size() - 1; i > 0 ; i -= 1) {
            for (int n: freq[i]) {
                result.push_back(n);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
