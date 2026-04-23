class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0; i<nums.size();i++) mpp[nums[i]]++;
        int missing = 1;
        for(auto it:mpp)
        {
            if(it.first==missing) missing++;
        }
        return missing;
        
    }
};