class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int starta=0;
        int startb=0;

        while(starta < name.size() && startb < typed.size()){
            if(name[starta]==typed[startb]){
                startb++;
                starta++;
            }
            else if(startb > 0 && typed[startb] == typed[startb-1] ){
                startb++;
            }else{
                return false;
            }
        }
        if (starta != name.size())
            return false;

        while (startb < typed.size()) {
            if (typed[startb] != typed[startb - 1])
                return false;
            startb++;
        }
        return true;
    }
};