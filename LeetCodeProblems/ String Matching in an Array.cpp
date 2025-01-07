// problem link
// https://leetcode.com/problems/string-matching-in-an-array/description/


// Source Code


class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    // If words[i] is a substring of words[j]
                    res.push_back(words[i]);
                    break; // No need to check further for this word
                }
            }
        }

        return res;
    }
};
