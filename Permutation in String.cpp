class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int> a(26,0);
         vector<int> b(26,0);
        int s1len=s1.size();
        int s2len=s2.size();
        if(s1len>s2len)
            return false;
        int left=0,right=0;
        while(right<s1len)
        {
            a[s1[right]-'a']++;
            b[s2[right]-'a']++;
            right++;
        }
        right-=1;
       
        while(right<s2len)
        {
            if(a==b)
                return true;
            right++;
            if(right!=s2len)
                b[s2[right]-'a']++;
            b[s2[left]-'a']--;
            left+=1;
            
        }
        return false;
        
    }
};
