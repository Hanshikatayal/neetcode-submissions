class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n == 0) return {""};
        vector<string> result;
        for (int k = 0; k < n; ++k) {
            vector<string> left_parts = generateParenthesis(k);
            vector<string> right_parts = generateParenthesis(n - 1 - k);
            
            for (const string& left : left_parts) {
                for (const string& right : right_parts) {
                    result.push_back("(" + left + ")" + right);
                }
            }
        }
        return result;
    }
};
