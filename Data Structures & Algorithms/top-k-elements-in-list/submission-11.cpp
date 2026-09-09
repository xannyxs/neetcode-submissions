class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> h = {};
        vector<vector<int>> freq(nums.size() + 1);

        for (const auto& num : nums) {
            h[num] += 1;
        }

        for (const auto& e : h) {
            freq[e.second].push_back(e.first);
        }

        vector<int> v = {};

        for (int n = freq.size() - 1; n > 0 && v.size() < k; n -= 1) {
            for (auto& f : freq[n]) {
                v.push_back(f);
                if (v.size() == k) break;
            }
        }

        return v;
    }
};
