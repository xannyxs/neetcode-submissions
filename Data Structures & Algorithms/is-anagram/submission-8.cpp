class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> s_len = {};
        unordered_map<char, int> t_len = {};

        for (int i = 0; i < s.size(); i += 1) {
            s_len[s[i]] += 1;
            t_len[t[i]] += 1;
        }

        return s_len == t_len;
    }
};
