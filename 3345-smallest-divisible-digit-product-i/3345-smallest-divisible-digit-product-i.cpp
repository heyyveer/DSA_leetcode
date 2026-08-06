class Solution {
public:
    int prod(int n){
        int res =1;
        while(n){
            res*=n%10;
            n/=10;
            if(res==0){
                return res;
            }
        }
        return res;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int k = prod(i);
            if(k%t==0){
                return i;
            }
        }
        return -1;
    }
};