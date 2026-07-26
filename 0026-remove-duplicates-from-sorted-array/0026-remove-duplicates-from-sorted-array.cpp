class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int ch : nums){
            s.insert(ch);
        }
        int a = 0;
        for(int ch : s){
            nums[a++]=ch;
        }
        return s.size();
    }
};
