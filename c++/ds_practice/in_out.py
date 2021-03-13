ti=1
g= [[] for i in range(15)]
intime=[0]*15
outtime=[0]*15
vis= [0]*15
def dfs(root):
	global g, vis, outtime, intime, ti
	vis[root]=1
	intime[root]=ti
	ti+=1
	for c in g[root]:
		if vis[c]==0:
			dfs(c)
	outtime[root]=ti
	ti+=1

if __name__=="__main__":
	m=int(input())
	while m:
		a,b = map(int, input().split())
		g[a].append(b)
		g[b].append(a)
		m-=1
	dfs(1)
	for i in range(1, 7):
		print("Node " + str(i) +
              " Pre number " + str(intime[i]) +
              ", Post number " + str(outtime[i]))