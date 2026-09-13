class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int>count(26,0);
        int left=0,maxfreq=0,maxLen=0;
        for(int right=0;right<n;right++){
            count[s[right]-'A']++;
            maxfreq=0;
            for(int i=0;i<26;i++){
                maxfreq=max(maxfreq,count[i]);
            }
            while((right-left+1)-maxfreq>k){
                count[s[left]-'A']--;
                left++;
                for(int i=0;i<26;i++){
                    maxfreq=max(maxfreq,count[i]);
                }
            }
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};
