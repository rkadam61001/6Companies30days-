//https://practice.geeksforgeeks.org/problems/decode-the-string2444/1
class Solution{
public:
string decodeString(string &s,int &i)
{
    string res;
    while(i<s.length()&&s[i]!=']')
    {
        if(isdigit(s[i]))
        {
            int k=0;
            while(i<s.length()&&isdigit(s[i]))
            {
                k=(k*10)+s[i++]-'0';
            }
            i++;
            string r=decodeString(s,i);
          //  cout<<"First"<<" "<<r<<endl;
            while(k!=0)
            {
                res+=r;
                k--;
            }
            i++;
        }
        else{
            res+=s[i++];
           // cout<<"second"<<" "<<res<<endl;
        }
       // i++;
    }
    return res;
}
    string decodedString(string s){
        // code here
        int i=0;
        return decodeString(s,i);
    }
};
