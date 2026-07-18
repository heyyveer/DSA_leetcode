class Solution {
public:
    bool check(vector<int>& citations,int mid){
        int count=0;
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=mid){
                count++;
                if(count>=mid){
                    return true;
                }
            }
        }
        return false;
    }
    int hIndex(vector<int>& citations) {
        int left=0;
        int right=*max_element(citations.begin(), citations.end());
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(citations,mid)){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
    }
};