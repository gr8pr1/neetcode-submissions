class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int i : nums) {
            auto [_, added] = seen.insert(i);
            if (not added)
                return true;
        }
        return false;

    }
};