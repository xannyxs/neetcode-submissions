class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> h = {};

        for (auto num : nums) {
            h[num] += 1;
        }

        vector<int> result = {};
        for (; k > 0; k -= 1) {
            int k = 0;
            int highest = 0;

            for (const auto& [key, value] : h) {
                if (value > highest) {
                    highest = value;
                    k = key;
                }
            }

            result.push_back(k);
            h.erase(k);
        }

        return result;
    }
};
