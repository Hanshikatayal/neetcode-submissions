class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.length();
        int n=t.length();
        if(s.empty()||t.empty()||s.length()<t.length()){
            return "";
        }
        vector<int>map(128,0);
        int count=t.length();
        int start=0,end=0,minLen=INT_MAX,startIndex=0;
        for(char c:t){
            map[c]++;
        }
        while(end<s.length()){
            if(map[s[end]]>0){
                count--;
            }
            map[s[end]]--;
            end++;
            while(count==0){
                if(end-start<minLen){
                    minLen=end-start;
                    startIndex=start;
                }
                map[s[start]]++;
                if(map[s[start]]>0){
                    count++;
                }
                start++;
            }
        }
        if(minLen==INT_MAX){
            return "";

        }else{
            return s.substr(startIndex,minLen);
        }
    }
};