arr= list(map(int,input().strip().split(',')))
d={}
for x in arr:
	if x in d:
		d[x]+=1
	else:
		d[x]=1
ans=[]
for i in range(0,len(arr)):
	t=-1
	val=-1
	for j in range(i+1,len(arr)):
		if d[arr[j]]==val and arr[j]<t and arr[j]>arr[i]:
			t=arr[j]
		elif arr[j]>arr[i]:
			if d[arr[j]]>val:
				t=arr[j]
				val=d[arr[j]]
			


	ans.append(t)
	d[arr[i]]-=1
for i in range(len(ans)-1):
	print(ans[i],end=',')
print(ans[-1])