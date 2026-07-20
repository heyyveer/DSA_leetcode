class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> odd;
        priority_queue<int> even;
        string s = to_string(num);
        for(char ch : s){
            int digit = ch - '0';
            if(digit % 2 == 0)
                even.push(digit);
            else
                odd.push(digit);
        }
        string ans;
        for(char ch:s){
            int digit=ch-'0';
            if(digit%2==0){
                ans += (even.top() + '0');
                even.pop();
            }
            else{
                ans += (odd.top() + '0');
                odd.pop();
            }
        }
        return stoi(ans);
    }
};