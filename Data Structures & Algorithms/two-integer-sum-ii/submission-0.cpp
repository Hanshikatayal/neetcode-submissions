class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            if(nums[left]+nums[right]==target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                return ans;
            }
            else if(nums[left]+nums[right]<target)
            left++;
            else
            right--;
        } 
        return ans;
              
    }
};
