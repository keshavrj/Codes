file1=open("input1.txt","r")
file2=open("output1.txt","w")
t= int(input())
while t:
	t-=1
	n= int(input())
	b=list(map(int, input().split()))
	b.insert(0,0)
	a=[0]*(n+1)
	a[n]=1
	m=3
	for i in range(n-1,0,-1):
		if(b[i]==i):
			a[i]=m
			m+=1
		else:
			a[i]=a[b[i]]
	for i in range(1,n+1):
		print(a[i],end=" ")
	print()
