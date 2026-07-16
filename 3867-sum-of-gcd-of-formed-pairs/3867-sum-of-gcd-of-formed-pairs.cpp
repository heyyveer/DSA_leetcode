class Solution {
public:
    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        vector<int> maxi(nums.size());
        vector<int> prefixgcd(nums.size());
        long long maxval = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            maxval = max(maxval, (long long)nums[i]);
            maxi[i] = maxval;
        }
        for(int i = 0; i < nums.size(); i++) {
            prefixgcd[i] = gcd(maxi[i], nums[i]);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        long long int ans=0;
        int i =0,j=nums.size()-1;
        while(i<j){
            ans+=gcd(prefixgcd[i],prefixgcd[j]);
            i++;
            j--;
        }
        return ans;
    }
};