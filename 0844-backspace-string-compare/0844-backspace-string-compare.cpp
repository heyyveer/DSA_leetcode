class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string u="";
        string v="";

        for(char ch : s){
            if(ch!='#'){
                u+=ch;
            }
            else{
                if(!u.empty()){
                    u.pop_back();
                }
            }
        }
        for(char ch : t){
            if(ch!='#'){
                v+=ch;
            }
            else{
                if(!v.empty()){
                    v.pop_back();
                }
            }
        }

        return u==v;
    }
};