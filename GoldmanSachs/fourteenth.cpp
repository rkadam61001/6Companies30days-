class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
     int *ans=new int[2];
     bool a[n+1]={false};
     int mi;
     int re;
     for(int i=0;i<n;i++)
     {
         if(a[arr[i]]==true)
         {
             re=arr[i];
         }
         a[arr[i]]=true;
     }
     for(int i=1;i<=n;i++)
     {
         if(a[i]==false)
         {
             mi=i;
             break;
         }
     }
     ans[0]=re;
     ans[1]=mi;
     return ans;
    }
           
};
