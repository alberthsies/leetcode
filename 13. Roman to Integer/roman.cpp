class Solution {
public:
    int romanToInt(string s) {
        enum RomanNum {I=1, V=5, X=10, L=50, C=100, D=500, M=1000};
        int preHolder = 0;
        int curHolder = 0;
        if (s[0] == 'I'){
            preHolder = I;
        }
        else if (s[0] == 'V'){
            preHolder = V;
        }
        else if (s[0] == 'X'){
            preHolder = X;
        }
        else if (s[0] == 'L'){
            preHolder = L;
        }
        else if (s[0] == 'C'){
            preHolder = C;
        }
        else if (s[0] == 'D'){
            preHolder = D;
        }
        else if (s[0] == 'M'){
            preHolder = M;
        }
        
        int returnNum = preHolder;
        for (int i = 1; i < s.size(); i++){
            if (s[i] == 'I'){
                curHolder = I;
            }
            else if (s[i] == 'V'){
                curHolder = V;
            }
            else if (s[i] == 'X'){
                curHolder = X;
            }
            else if (s[i] == 'L'){
                curHolder = L;
            }
            else if (s[i] == 'C'){
                curHolder = C;
            }
            else if (s[i] == 'D'){
                curHolder = D;
            }
            else if (s[i] == 'M'){
                curHolder = M;
            }
            
            returnNum += curHolder;
            if (preHolder < curHolder){
                returnNum -= (preHolder * 2);
            }
            preHolder = curHolder;
        }
        return returnNum;
        
    }
};