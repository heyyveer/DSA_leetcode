class Solution {
public:
    int check(vector<int>& bloomDay,int m,int k,int days){
        int flower=0,bouq=0;
        for(int bloom:bloomDay){
            if(bloom<=days){
                flower++;
                if(flower==k){
                    bouq++;
                    flower=0;
                }
            }
            else{
                flower=0;
            }
        }
        return bouq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m * k >bloomDay.size()){
            return -1;
        }
        int left=*min_element(bloomDay.begin(),bloomDay.end());
        int right=*max_element(bloomDay.begin(),bloomDay.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(check(bloomDay,m,k,mid)){ 
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left; 
    }
};