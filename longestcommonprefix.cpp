class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool flag = false;
        int smallest = strs[0].length();
        int total = strs.size();
        string prefix = "";
        for (const auto &it : strs) {
            if (it.length() < smallest) {
                smallest = it.length();
            }
        }
        for (int i=0; i<smallest; ++i) { //iterate each character
            int counter = 0;
            char first = strs[0][i];
            for (const auto &it : strs) { //for each character iterate vector 
                if (it[i] == first) {
                    ++counter;
                }
                else {
                    return prefix;
                }
            }
            if (counter == total) {
                prefix.insert(prefix.end(), first);
            }
        }
        return prefix;
    }
};