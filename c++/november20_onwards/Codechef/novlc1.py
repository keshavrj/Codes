t= int(input())
while(t):
	t-=1
	n=int(input())
	#arr=[]
	# for i in range(0,n):
	# 	x=int(input())
	# 	arr.append(x)
	arr = list(map(int, input().split()))
	arr.sort()
	cnt1=arr[n-1]
	cnt2=0
	i=n-2
	while(i>=0):
		if cnt1>=cnt2:
			cnt2+=arr[i]
		else:
			cnt1+=arr[i]
		i-=1
	print(max(cnt1,cnt2))
