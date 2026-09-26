class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Baisc Approach 

        // int prod = 1;
        // bool iszero = false;
        // for(int i =0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         iszero=true;
        //         continue;
        //     }else{
        //         prod*=nums[i];
        //     }
        // }
        // cout<<prod<<endl;
        // for(int i =0;i<nums.size();i++){
        //     if(iszero==true){
        //         if(nums[i]==0){
        //             nums[i]=prod;
        //         }
        //         else{
        //             nums[i]=0;
        //         }
        //     }
        //     else{
        //         nums[i]=prod/nums[i];
        //     }
        // }
        // return nums;


        //prefix and suffix approach

        int n = nums.size();
        vector<int>prefix(n,1);
        int init=1;
        for(int i =0;i<n;i++){
            prefix[i]=init;
            init*=nums[i];
            cout<<prefix[i]<<"--";
        }
        cout<<endl;
        vector<int>suffix(n,1);
        init=1;
        for(int i =n-1;i>=0;i--){
            suffix[i]=init;
            init*=nums[i];
        }
        
        vector<int>ans(n,0);
        for(int i =0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
    }
};