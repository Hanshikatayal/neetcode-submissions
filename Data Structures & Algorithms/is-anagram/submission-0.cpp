class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
         unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for(int i=0;i<n;i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }
        return countS==countT;
    }
};
