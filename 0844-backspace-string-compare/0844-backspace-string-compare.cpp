class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="";
        string b="";
        for(char ch: s){
            if(ch!='#'){
                a+=ch;
            }
            else if(!a.empty()){
                a.pop_back();
            }
        }
        for(char ch: t){
            if(ch!='#'){
                b+=ch;
            }
            else if(!b.empty()){
                b.pop_back();
            }
        }
        return a==b;
    }
};