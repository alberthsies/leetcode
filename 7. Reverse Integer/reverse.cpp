class Solution {
public:
    int reverse(int x) {
        // 1. Set variables
        long altX = long(x);
        long returnValue = 0;
        bool isNegative = false;
        
        // 2. Negative check
        if (altX < 0){
            altX = altX * (-1);
            isNegative = true;
        }
        
        // 3. Reverse
        while (altX > 0){
            returnValue = returnValue * 10 + altX % 10;
            altX = (altX - altX % 10) / 10;
        }
        
        // 4. Boundary check
        if (returnValue < -2147483648 || returnValue > 2147483647)
            return 0;
            
        return isNegative? (returnValue * -1) : (returnValue);
    }
};