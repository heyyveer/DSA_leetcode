class Solution {
public:
    int add(int a){
        int sum=0;
        while(a){
            int k=a%10;
            sum+=k;
            a=a/10;
        }
        return sum;
    }

    int addDigits(int num) {
        while(num>=10){
            num=add(num);
        }
        return num;
    }
};