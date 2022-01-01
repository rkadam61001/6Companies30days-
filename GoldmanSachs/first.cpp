//https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#
/ { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(auto str:string_list)
        {
            string word=str;
            sort(word.begin(),word.end());
            mp[word].push_back(str);
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
        
    }
};
