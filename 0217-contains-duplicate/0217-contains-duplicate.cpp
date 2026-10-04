class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // using map 
        // unordered_map<int,int> mp;
        // for(int i =0;i<nums.size();i++){
        //     if(mp.find(nums[i])!=mp.end()){
        //         return true;
        //     }
        //     mp[nums[i]]=i;
        // }
        // return false;

        //using set 
        unordered_set<int> st;
        for(int i =0;i<nums.size();i++){
            if(st.count(nums[i])){
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};