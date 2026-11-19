class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> buckets(nums.size() + 1);
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        
        for (const auto& [num, freqN] : freq) {
            buckets[freqN].push_back(num);
        }

        vector<int> result;
        for (int i = buckets.size() - 1; i > 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                k--;
                
                if (k == 0) {
                    return result;
                }
                    
            }
        }
        return {};

    }
};
