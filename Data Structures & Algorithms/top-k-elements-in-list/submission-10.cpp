class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> h = {};
        vector<vector<int>> freq(nums.size() + 1);

        for (auto num : nums) {
            h[num] += 1;
        }
        for (const auto& e : h) {
            freq[e.second].push_back(e.first);
        }

        vector<int> a = {};
        for (int n = freq.size() - 1; n > 0; n -= 1) {
            for (int n : freq[n]) {
                a.push_back(n);
                if (k == a.size()) {
                    return a;
                }
            }
        }

        return a;
    }
};
