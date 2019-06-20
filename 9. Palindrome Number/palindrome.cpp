class Solution {
public:
    bool isPalindrome(int x) {
        // 1. Set the variables
        long reverseNum = 0;
        long originNum = x;
        
        // 2. Check the boundary
        if (x < 0){
            return false;
        }
            
        // 3. Input stack
        while (x > 0){
            reverseNum = reverseNum * 10 + x % 10;
            x = x / 10;
        }
        
        // 4. Check reverse
        return originNum == reverseNum;
    }
};