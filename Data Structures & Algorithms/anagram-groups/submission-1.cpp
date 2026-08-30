class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> s = {};

        for (int i = 0; i < strs.size(); i += 1) {
            string str = strs[i];
            sort(str.begin(), str.end());

            s[str].push_back(strs[i]);
        }

        vector<vector<string>> v = {};
        for (const auto& it: s) {
            v.push_back(it.second);
        }


        return v;
    }
};
