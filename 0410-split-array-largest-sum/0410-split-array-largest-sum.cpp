class Solution {
public:
    bool check(vector<int> &arr, int k,long long mid){
        int count=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else{
                count++;
                sum=arr[i];
            }
        }
        return count <= k;
    }
    int splitArray(vector<int>& arr, int k) {
        long long left = *max_element(arr.begin(), arr.end());
        long long right = accumulate(arr.begin(), arr.end(), 0LL);
        int ans=-1;
        if(k > arr.size())
            return -1;
        while(left<=right){
            long long mid = left + (right - left) / 2;
            if(check(arr,k,mid)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};