class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum=0,msum=INT_MIN;
        //int n=sizeof(nums)/sizeof(nums[0]);
        for(int i=0;i<nums.size();i++)
        {
            
            if(csum<0)
                csum=0;
            csum+=nums[i];
            msum=max(msum,csum);
            
        }
        return msum;
    }
};
