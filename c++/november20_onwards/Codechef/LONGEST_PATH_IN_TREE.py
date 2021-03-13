import sys
sys.setrecursionlimit(10**6)
maxdis=-1
maxnode=-1
def dfs(root, g, vis,d):
	vis[root]=1
	global maxdis, maxnode
	if d>maxdis:
		maxdis=d
		maxnode=root


	for c in g[root]:
		if vis[c]==0:
			dfs(c, g, vis,d+1)


m = int(input())
m-=1
g= [[] for x in range(10005)]
vis= [0]*(10005)
while m:
	a,b = map(int, input().split())
	g[a].append(b)
	g[b].append(a)
	m-=1
dfs(1,g,vis,0)
maxdis=-1
vis= [0]*10005
dfs(maxnode, g,vis,0)
print(maxdis)