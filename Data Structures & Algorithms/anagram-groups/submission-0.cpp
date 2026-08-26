class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> s = {};

        for (auto str: strs) {
            string sorted_str = str;

            sort(sorted_str.begin(), sorted_str.end());
            s[sorted_str].push_back(str);
        }

        vector<vector<string>> result = {};
        for (auto& p : s) {
            result.push_back(p.second);
        }

        return result;
    }
};
