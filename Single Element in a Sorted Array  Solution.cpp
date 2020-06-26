class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int a=0;
      for(int x:nums)
      {
        a^=x;
      }
      return a;
  
        
    }
};
