# cook your dish here
import sys
sys.setrecursionlimit(10**6)
cc=0
def dfs(root, g, vis):
	vis[root]=1
	global cc
	cc+=1
	for c in g[root]:
		if vis[c]==0:
			dfs(c, g, vis)


for _ in range(int(input())):
	cnt=0
	res=1
	n,m = map(int, input().split())
	g= [[] for x in range(n+1)]
	vis= [0]*(n+1)
	# cc=0
	while m:
		a,b = map(int, input().split())
		g[a].append(b)
		g[b].append(a)
		m-=1
	
	for i in range(1,n+1):
		if vis[i]==0:
			# global cc
			cc=0
			dfs(i, g, vis)
			cnt+=1
			res*=cc
	print(cnt,res%1000000007)