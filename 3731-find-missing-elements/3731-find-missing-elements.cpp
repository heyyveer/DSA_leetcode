class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        int min = nums[0] , max = nums[n];
        vector<int>ans;
        //O(n^2)
        // for(int i = min ; i<=max ; i++){
        //     for(int j = 0 ; j<=n ; j++){
        //         if(i == nums[j]){
        //             break;
        //         }
        //         else if(i != nums[j] && j==n){
        //             ans.push_back(i);

        //         }
        //     }
        // }


        //O(n)
        int k = min;
        int l = 0;
        for(int i = min ;i<=max;i++){
            if(nums[l] == k){
                k++;
                l++;
            }else{
                ans.push_back(k);
                k++;
            }
        }
        return ans;
    }
};