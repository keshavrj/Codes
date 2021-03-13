t= int(input())
while t:
	t-=1
	b=int(input())
	if b%2!=0:
		b-=1
	temp= int((b-2)/2)
	ans= temp*(temp+1)/2
	print(int(ans))