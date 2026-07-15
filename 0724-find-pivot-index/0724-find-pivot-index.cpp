class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>sums(nums.size(),0);
        sums[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            sums[i]=sums[i-1]+nums[i];
        }
        int end=sums[nums.size()-1];
        int left=0;
        int right=0;
        for(int i=0;i<nums.size();i++){
            int curr=sums[i];
            if(i==0){
                right=end-curr;
                if(right==left){
                    return i;
                }
            }
            else if(i==sums.size()){
                left=sums[i-1];
                if(right==left){
                    return i;
                }
            }
            else{
                left=sums[i-1];
                right=end-curr;
                if(left==right){
                    return i;
                }
            }
        }
        return -1;
    }
};