//https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/#
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    
		    if(str.length()==0||str[0]=='0')
		    {
		        return 0;
		    }
		    if(str.length()==1)
		    {
		        return 1;
		    }
		  int prevprevcnt=1;
		int prevcnt=1;
		    for(int i=1;i<str.length();i++)
		    {
		        int d=(str[i]-'0');
		        int dd=(str[i-1]-'0')*10+d;
		       int cnt=0;
		        if(d>0)
		        {
		            cnt=(cnt+prevcnt)%1000000007;
		        }
		        if(dd>=10&&dd<=26)
		        {
		            cnt=(cnt+prevprevcnt)%1000000007;
		        }
		        prevprevcnt=prevcnt;
		        prevcnt=cnt;
		        
		    }
		    return prevcnt%1000000007;
		    
		}

};
