class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                nums[i]=-1;
        }
        int sum=0;
        int ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==0)
            {
                if(ans<i+1)
                    ans=i+1;
            }
            else if(m.find(sum)!=m.end())
            {
                if(ans<i-m[sum])
                {
                    ans=i-m[sum];
                }
            }
            else m[sum]=i;
        }
        
            return ans;
            
        
        
    }
};
