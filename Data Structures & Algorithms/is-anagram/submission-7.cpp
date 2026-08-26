class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        std::unordered_map<char, int> s_len = {};
        std::unordered_map<char, int> t_len = {};

        for (int i = 0; i < s.size(); i += 1) {
            s_len[s[i]]++;
            t_len[t[i]]++;
        }

        return s_len == t_len;
    }
};
