class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int left=0,n=temperatures.size();
        vector<int>ans{n,0};
        for(int right=0;right<temperatures.size();right++){
            int l = 1;
            while(temperatures[right]<temperatures[left]){
                right++;
                l++;
            }
            ans[left]=l;
            left++;
        }
        return ans;
    }
};