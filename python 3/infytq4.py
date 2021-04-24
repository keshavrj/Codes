s=input()
flag=0
arr=[]
for i in s:
	if i.isdigit():
		x=int(i)
		if not x&1:
			flag=1
		arr.append(x)
if flag==0:
	print(-1)
else:
	arr.sort(reverse=True)
	n= len(arr)
	if arr[n-1]&1:
		for i in range(n-2,-1,-1):
			if not arr[i]&1:
				arr[i],arr[n-1]=arr[n-1],arr[i]
				break
	for i in arr:
		print(i,end='')


