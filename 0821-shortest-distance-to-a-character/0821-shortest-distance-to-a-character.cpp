class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>x;
        vector<int> ans(s.size());
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                x.push_back(i);
            }
        }

        for(int i =0;i<s.size();i++){
            int mindis = INT_MAX;
            if(s[i]==c){
                ans[i]=0;
            }
            else{
                for(int j=0;j<x.size();j++){
                    mindis = min(mindis, abs(x[j] - i));
                }
                ans[i]=mindis;
            }
        }
        return ans;
    }
};