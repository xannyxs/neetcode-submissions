class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> s;
        

        for (const auto &it: nums) {
            std::cout << it << std::endl;

            s.insert(it);
        }

        return s.size() != nums.size();
    }
};