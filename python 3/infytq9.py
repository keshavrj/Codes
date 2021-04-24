n= int(input())
arr= list(map(int, input().strip().split()))
mp={}
for i in arr:
	if i not in mp:
		mp[i]=1
	else: mp[i]+=1
a=sorted(mp.values())
ans=len(a)
for i in a:
	if i<=n:
		n-=i
		ans-=1
	else: break
print(ans)
