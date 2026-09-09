class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> sorted = {};

        for (const auto& str : strs) {
            string tmp = str;

            sort(tmp.begin(), tmp.end());
            sorted[tmp].push_back(str);
        }

        vector<vector<string>> v = {};
        for (const auto& e : sorted) {
            v.push_back(e.second);
        }

        return v;
    }
};
