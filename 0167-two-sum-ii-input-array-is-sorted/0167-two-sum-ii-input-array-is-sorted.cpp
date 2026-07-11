class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0;
        int last=numbers.size()-1;
        while(start<last){
            int sum = numbers[start] + numbers[last];
            if(sum==target){
                return {start+1,last+1};
            }
            else if(sum<target){
                start++;
            }
            else{
                last--;
            }
        }
        return {};
    }
};