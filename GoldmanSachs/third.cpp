//https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#
string encode(string src)
{     
  //Your code here 
  int n=src.length();
  string str="";
  int cnt=1;
  for(int i=0;i<n;i++)
  {
      if(src[i]==src[i+1])
      {
          cnt++;
      }
      else{
         str+=src[i];
         string t=to_string(cnt);
         str+=t;
         cnt=1;
      }
  }
  return str;
 
}     
 
