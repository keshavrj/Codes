from itertools import combinations
s =input()
res = [s[x:y] for x, y in combinations(range(len(s) + 1), r = 2) if len(s[x:y])%2 == 0 ]

ans=[]
for x in res:
	flag=1
	for c in x:
		if x.count(c)&1:
			flag=0
			break
	if flag:
		ans.append(x)

if len(ans)==0:
	print(-1)
else:
	ans.sort()
	ans.sort(key = lambda p:len(p))
	for i in range(len(ans)-1):
		print(ans[i],end=',')
	print(ans[-1])