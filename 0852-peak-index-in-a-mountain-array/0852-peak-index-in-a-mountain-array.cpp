class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        vector<int>test=arr;
        sort(arr.begin(),arr.end());
        int ans=arr[arr.size()-1];
        for(int i=0;i<arr.size();i++){
            if(test[i]==ans){
                return i;
            }
        }
        return -1;
    }
};