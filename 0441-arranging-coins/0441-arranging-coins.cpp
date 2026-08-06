class Solution {
public:
    // int check(int n){
    //     int sum = 0;
    //     for(int i = 1;i<1000;i++){
    //         sum+=i;
    //         if(sum>=n){
    //             return i;
    //         }
    //     }
    //     return 0;
    // }
    int arrangeCoins(int n) {
        // int k = check(n);
        // long long left=0;
        // long long right=n;
        // int ans=0;
        // while(left<=right){
        //     long long mid=left+(right-left)/2;
        //     long long coins=mid*(mid+1)/2;
        //     if(coins<=n){
        //         ans=mid;
        //         left=mid+1;
        //     }
        //     else{
        //         right=mid-1;
        //     }
        // }
        // return ans;
        return (sqrt(8.0*n+1)-1)/2;
    }
};