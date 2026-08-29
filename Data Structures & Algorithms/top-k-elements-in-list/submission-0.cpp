class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        vector<vector<int>>freq(nums.size()+1);
        for(auto entry:count){
            int num=entry.first;
            int frequency=entry.second;
            freq[frequency].push_back(num);
        }
        vector<int>res;
        for(int i=freq.size()-1;i>0;i--){
            for(int num:freq[i]){
                res.push_back(num);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return res;
    }
};
