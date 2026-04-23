class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n,1);
        int product_left = 1;
        int product_right = 1;
        for(int i=0; i<n;i++)
        {
            res[i] = product_left;
            product_left *= nums[i];
        }
        for(int i=n-1; i>=0; i--)
        {
            res[i] *= product_right;
            product_right *= nums[i]; 
        }
        return res;

    }
};
