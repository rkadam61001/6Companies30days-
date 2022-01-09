//https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/#
class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        unordered_map<int ,char>mp;
         mp[1]='A';
         mp[2]='B';
         mp[3]='C';
         mp[4]='D';
         mp[5]='E';
         mp[6]='F';
         mp[7]='G';
         mp[8]='H';
         mp[9]='I';
         mp[10]='J';
         mp[11]='K';
         mp[12]='L';
         mp[13]='M';
         mp[14]='N';
         mp[15]='O';
         mp[16]='P';
         mp[17]='Q';
         mp[18]='R';
         mp[19]='S';
         mp[20]='T';
         mp[21]='U';
         mp[22]='V';
         mp[23]='W';
         mp[24]='X';
         mp[25]='Y';
         mp[26]='Z';
        string v;
        long long int rem;
        while(n)
        {
            rem=n%26;

          //  cout<<rem<<endl;
            if(mp.find(rem)!=mp.end())
            {
               // auto it
              // cout<<"yes"<<endl;
                v.push_back(mp[rem]);

            }
            if(rem==0)
            {
                v.push_back('Z');
            }
            if(rem==0)
            {
                   n=n/26;
                   n=n-1;
            }
            else{
                n=n/26;
            }
            
        }
      
       /* for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }*/
       reverse(v.begin(),v.end());
       return v;
    }
};
