class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.empty()){
            return res;
        }
        unordered_map<char,string>digitToLetters={
            {'2',"abc"},{'3',"def"}, {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        solve(digits,0,"",res,digitToLetters);
        return res;
        
    }
    void solve(const string& digits,int index,string combination,vector<string>&res,const unordered_map<char,string>digitToLetters){
        if(index==digits.length()){
            res.push_back(combination);
            return ;
        }
        string letters=digitToLetters.at(digits[index]);
        for(int i=0;i<letters.length();++i){
            char letter=letters[i];
            solve(digits,index+1,combination+letter,res,digitToLetters);
        }
    }
};