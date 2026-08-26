class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> s = {};

        for (int i = 0; i < nums.size(); i += 1) {
            s.insert(nums[i]);
        }

        
        std::cout << nums.size() << " " << s.size() << std::endl;

        return nums.size() != s.size();
    }
};