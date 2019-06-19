class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        //cout << nums.size() << endl;
        int sizeOfArray = nums.size();
        
        for (int i = 0; i < sizeOfArray - 1; i++){
            int remain = target - nums[i];
            
            for (int j = i + 1; j < sizeOfArray; j++){
                //cout << "(" << i << ", " << j << ")" << endl;
                if (remain == nums[j]){
                    return {i, j};
                }
            }
            
        }
        return {0, 1};
    }
};