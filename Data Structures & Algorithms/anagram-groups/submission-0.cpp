class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (int i = 0; i < strs.size(); i++) {
            string original = strs[i];
            string sortedString = original;
             sort(sortedString.begin(), sortedString.end());
              res[sortedString].push_back(original);
        }
         vector<vector<string>> result;
          unordered_map<string, vector<string>>::iterator it;

        for (it = res.begin(); it != res.end(); it++) {
            result.push_back(it->second);
        }

        return result;


    }
};
