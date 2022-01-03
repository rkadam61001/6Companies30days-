//https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++)
       {
           int rem=nums[i]%k;
           int of=mp[rem];
           mp[rem]=of+1;
       }
       for(int i=0;i<nums.size();i++)
       {
           int re=nums[i]%k;
           if(re==0)
           {
               int dq=mp[re];
               if(dq%2==1)
               {
                   return false;
               }
           }
          else if(2*re==k)
          {
             int rq=mp[re];
             if(rq%2==1)
             {
                 return false;
             }
          }
          else{
              int fq=mp[re];
              int oqf=mp[k-re];
              if(fq!=oqf)
              {
                  return false;
              }
          }
       }
       return true;
    }
};
