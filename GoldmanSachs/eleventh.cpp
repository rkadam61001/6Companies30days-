//https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        int s=0;
        int mi=INT_MAX;
        while(j<n)
        {
         s+=nums[j];
           
            if(s>=target){
               while(i<n&&s>=target)
               {
                   mi=min(mi,j-i+1);
                   s-=nums[i];
                   i++;
               }
              
           }
             j++; 
           
        }
        return mi==INT_MAX?0:mi;
        
    }
};
