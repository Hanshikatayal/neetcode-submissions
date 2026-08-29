class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            res+=to_string(s.size())+"#"+s;
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            i=j+1;
            string word=s.substr(i,length);
            res.push_back(word);
            i+=length;
        }
        return res;

    }
};
