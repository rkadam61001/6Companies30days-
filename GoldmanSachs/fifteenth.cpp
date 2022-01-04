//https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#
class Solution{   
public:
    string printMinNumberForPattern(string S){
        int num=1;
        stack<int>st;
        string s;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='D')
            {
                st.push(num);
                num++;
            }
            else{
                st.push(num);
                num++;
                while(!st.empty())
                {
                    s+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while(!st.empty())
        {
            s+=to_string(st.top());
            st.pop();
        }
        return s;
        // code here 
    }
};
