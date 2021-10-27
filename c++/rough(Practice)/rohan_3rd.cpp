#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
#define INF 0x3f3f3f3f

map<int,vector<int>> mp;
unordered_set<int> vis, notVis;
vector<int> result;


void helper(int src, int dest)
{
	for(auto i:mp[src])
	{
		if((vis.find(i)!=vis.end()) || (notVis.find(i)!=notVis.end()))
		  continue;

        else{
				if(find(mp[i].begin(), mp[i].end(),dest)!=mp[i].end())
				{
					result.push_back(i);
					vis.insert(i);
				}
				else{
					helper(i, dest);
					if(vis.find(i)!=vis.end())
                        continue;
                    else
						notVis.insert(i);
				}
		}
	}
}
int main()
{
     

    int n,m,src,dest;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        
        cin>>v[i];
    }
    
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int start,end;
        cin>>start>>end;
        mp[start].push_back(end);
    }
    
    cin>>src>>dest;

    if(find(mp[src].begin(), mp[src].end(), dest)!=mp[src].end())
    {   
        result.push_back(src);
    	vis.insert(src);
    }
    helper(src, dest);
    sort(result.begin(), result.end());
    for(int i=0;i<result.size();i++)
    	cout<<result[i]<<" ";
}