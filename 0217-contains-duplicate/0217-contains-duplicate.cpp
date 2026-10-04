class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int t =0;
        for(int i =0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                return true;
            }
            mp[nums[i]]=t++;
        }
        return false;
    }
};