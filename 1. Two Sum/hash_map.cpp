class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 1. set variables
        int sizeOfNums = nums.size();
        vector<int> returnVector;
        
        // 2. safty check for nums length
        if (sizeOfNums < 2){
            return returnVector;
        }
        
        // 3. create hash map
        unordered_multimap<int, int> hashMap;
        for (int i = 0; i < sizeOfNums; i++){
            hashMap.insert({nums[i], i});
        }
        
        // 4. check hash map answer
        for (int i = 0; i < sizeOfNums; i++){
            int remain = target - nums[i];
            if (hashMap.find(remain) != hashMap.end()){ // found
                int index = hashMap.find(remain)->second;
                if (index == i){ // two nums are the same
                    if (hashMap.count(remain) == 1){ // only one
                        continue;
                    }
                    else{
                        //hashMap
                        //returnVector.insert(index);
                        returnVector.push_back(index);
                        auto range = hashMap.equal_range(remain);
                        for (auto it = range.first; it != range.second; ++it) {
                            if (it->second != index){
                                returnVector.push_back(it->second);
                                break;
                            }
                        }
                    }
                }
                
                else{ // two nums are not the same
                    if (index < i){
                        returnVector.push_back(index);
                        returnVector.push_back(i);
                    }
                    else{
                        returnVector.push_back(i);
                        returnVector.push_back(index);
                    }
                    
                    return returnVector;
                }
            }
        }
        
        return returnVector;
    }
};