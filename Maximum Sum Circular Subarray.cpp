class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) 
    {
        int total=0;
       int min_sum=INT_MAX;
        int max_sum=INT_MIN;
        int maxend=0;
        int minend=0;
        for(int i:A)
        {
            total+=i;
            maxend=max(i,maxend+i);
            max_sum=max(maxend,max_sum);
                minend=min(i,minend+i);
            min_sum=min(minend,min_sum);
            
        }
       
        
        if(max_sum>0)
            return max(total-min_sum,max_sum);
        else return max_sum;
    }
};
