class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // nested loop - O(n^2) , O(1)
        // for(int i =0;i<nums.size();i++){
        //     for(int j =i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};

        // hashmap - O(n)
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int x = target-nums[i];
            if(mp.count(x)){
                return {mp[x],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};