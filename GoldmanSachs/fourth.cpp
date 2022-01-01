//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#

//Brute force
 int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {   
        int cnt=0;
        for(int i=0;i<a.size();i++)
        {
             long long pr=1;
            for(int j=i;j<a.size();j++)
            {
                pr*=a[j];
                if(pr<k)
                {
                    cnt++;
                }
                else{
                    break;
                }
            }
        }
        return cnt;
 }

//sliding window
 int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {   
       int cnt=0;
        int i=0;
        int j=0;
        long long pr=1;
        while(j<n)
        {
           pr*=a[j];
           if(pr>=k)
           {
               while(i<=j&&pr>=k)
               {
                   pr/=a[i];
                   i++;
               }
           }
           cnt+=j-i+1;
           j++;
        }
        return cnt;
 }
