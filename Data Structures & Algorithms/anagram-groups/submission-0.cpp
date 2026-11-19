class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> stringMap;

        for (const string& i : strs) {
            int counter[26] = {};
            for (char j : i) {
                counter[j - 'a']++;
            }
            
            string key = "";

            for (int element : counter) {
                key += to_string(element) + ".";
            }

            stringMap[key].push_back(i);
        }

        vector<vector<string>> resultV;
        for (const auto& [key, group] : stringMap) {
            resultV.push_back(group);
        }
        return resultV;
    }
};
