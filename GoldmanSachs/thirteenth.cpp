//Find max 10 numbers in a list having 10M entries.
//For  sake of convenience we have taken smaller values

//first method:sort array/vector and iterate form last k elements which will be top element...TC:O(nlogn)-->sorting  SC:O(1)
//second method:use priority queue...TC:O(logk)  SC:O(n)
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void topElement(int arr[],int n,int k)
    {
        vector<int>ans;
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
    }
};
int main()
{
    int n;
    cout<<"Enter number of elements you want to enter"<<" "<<endl;
    cin>>n;
    int k;
    cout<<"Enter how many top elements to return"<<" "<<endl;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    s.topElement(arr,n,k);
}
