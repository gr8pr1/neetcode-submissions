class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;
        
        std::array<int, 26> countS = {};
        std::array<int, 26> countT = {};

        for (char c : s) {
            countS[c - 'a']++;
        }

        for (char c : t) {
            countT[c - 'a']++;
        }

        return countS == countT;
        
    }
};
