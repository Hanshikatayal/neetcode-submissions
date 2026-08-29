class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string, vector<string>> map;
        for (int i = 0; i < strs.size(); i++) {
            string currentWord = strs[i];
            string sortedWord = currentWord;
            sort(sortedWord.begin(), sortedWord.end());
            map[sortedWord].push_back(currentWord);
        }
        vector<vector<string>> ans;
        for (auto item : map) {
            ans.push_back(item.second); 
        }
        return ans;

    }
};
