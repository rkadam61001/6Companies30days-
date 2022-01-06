//https://practice.geeksforgeeks.org/problems/rotten-oranges2536/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        if(grid.empty())
        {
            return 0;
        }
        int day=0;
        queue<pair<int,int>>q;
        int m=grid.size();
        int n=grid[0].size();
        int tot=0;
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]!=0)
                {
                    tot++;
                }
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        int dx[4]={0,0,-1,1};
        int dy[4]={-1,1,0,0};
        while(!q.empty())
        {
            int k=q.size();
            cnt+=k;
            while(k--)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int tx=x+dx[i];
                    int ty=y+dy[i];
                    if(tx<0||tx>=m||ty<0||ty>=n||grid[tx][ty]!=1)
                    {
                        continue;
                    }
                    grid[tx][ty]=2;
                    q.push({tx,ty});
                }
                 
            }
            if(!q.empty())
            {
                day++;
            }
        }
        return tot==cnt?day:-1;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
