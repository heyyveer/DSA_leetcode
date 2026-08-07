class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int a = word1.length();
        int b = word2.length();
        int max = 0;
        if(a>b) max = a;
        else max = b;
        for(int i = 0 ; i<max;i++){
            if(i<a) merged+=word1[i];
            else merged+="";
            if(i<word2.size()){
                merged+=word2[i];
            }
            else{
                merged+="";
            }
        }
        cout<<a<<" "<<b<<endl;
        return merged;
    }
};